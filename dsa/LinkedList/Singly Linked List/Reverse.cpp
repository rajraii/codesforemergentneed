// ! Reverse a singly linked list

#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;
  node(int d){
    data=d;
    next=NULL;
  }
};

node* reverse(node *head){
  node *curr=head;
  node *prev=NULL;
  while(curr!=NULL){
    node *temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
  }
  return prev;
}