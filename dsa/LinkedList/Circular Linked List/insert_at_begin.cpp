// !  Insert at begin in circular linked list

#include<iostream>
using namespace std;

struct node{
  int data;
  node* next;
  node(int x){
    data=x;
  }
};

// ! Naive approach

node* insert(node* head, int x){
  node *temp= new node(x);
  if(head==NULL) temp->next=temp;
  node *curr=head;
  while(curr->next!=head)
    curr=curr->next;
  curr->next=temp;
  temp->next=head;
  return temp;
}

// ! Efficient approach

node *insert(node *head, int x){
  node *temp=new node(x);
  if(head==NULL){
    temp->next=temp;
    return temp;
  }
  temp->next=head->next;
  head->next=temp;
  int t=head->data;
  head->data=temp->data;
  temp->data=t;
  return head;
}