// Print the nth node from the end

#include<iostream>
using namespace std;

// ! Naive Approach Iterative O(n)

struct node{
  int data;
  node *next;
};

void PrintN(node *head, int n){
  int len=0;
  for(node *curr=head;curr!=NULL; curr=curr->next) len++;
  if(len<n) return;
  node *curr=head;
  for(int i=1;i<len-n+1;i++)
    curr=curr->next;
  cout<<curr->data<<endl;
}

// ! Two Pointer approach  O(n)

void printN(node *head, int n){
  if(head==NULL) return;
  node *first=head;
  for(int i=0;i<n;i++){
    if(first==NULL) return;
    first=first->next;
  }
  node *second=head;
  while(first!=NULL){
    second=second->next;
    first=first->next;
  }
  cout<<second->data;
}