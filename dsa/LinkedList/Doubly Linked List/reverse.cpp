// Reverse a Doubly linkedlist

#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node* prev=NULL;
  node* next=NULL;
};

//  ! Reverse a linked list

node* reverse(node *head){
  if(head==NULL || head->next==NULL) return head;
  node* prev=NULL;
  node* curr=head;
  while(curr != NULL){
    prev=curr->prev;
    curr->prev=curr->next;
    curr->next=prev;
    curr=curr->prev;
  }
  return prev->prev;
}