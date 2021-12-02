//  Delet head of circular linked list

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

// ! Naive approach

node *deletehead(node *head){
  if(head==NULL) return NULL;
  if(head->next==NULL){
    delete head;
    return NULL;
  } 
  node *curr=head;
  while(curr->next!=head)
    curr=curr->next;
  curr->next=head->next;
  delete head;
  return curr->next;
}

//  ! Efficient Approach

void DeleteHead(node *head){
  if(head==NULL || head->next==NULL) return;
  if(head->next==NULL){
    delete head;
    return;
  }
  head->data=head->next->data;
  node*temp=head->next;
  head->next=head->next->next;
  delete temp;
}