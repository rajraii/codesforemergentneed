//  Check if a linked list is a palindrome or not

#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
  node(int x){
    data=x;
    next=NULL;
  }
};    

// ! Naive Approach - make a stack and compare

#include<stack>
bool check(node *head){
  stack<char>s;
  node*curr=head;
  for(curr=head;curr != NULL; curr=curr->next)
    s.push(curr->data);
  for(curr=head;curr !=NULL; curr=curr->next){
    if(s.top() != curr->data) return false;
    s.pop();
  }
  return true;
}

// ! Efficient Approach  tortoise hare (floyd's)

node* reverse(node *head){
  node *curr=head, *prev=NULL;
  while(curr != NULL){
    node *temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
  }
  return curr;
}

bool Check(node *head){
  if(head==NULL) return true;
  node *slow=head,*fast=head;
  while(fast != NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
  }
  node *rev=reverse(slow->next);
  node *curr=head;
  while(curr != NULL){
    if(rev->data != curr->data) return false;
    rev=rev->next;
    curr=curr->next;
  }
}