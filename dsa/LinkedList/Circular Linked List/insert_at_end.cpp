//!  Insert at the end in Circular linked list

#include<iostream>
using namespace std;

struct node{
  int data;
  node* next;
  node(int x){
    data=x;
  }
};

// ! Naive same as insert at begin

// !Efficient apporach O(1)

node *insertEnd(node *head, int x){
  node *temp=new node(x);
  if(head==NULL){
    temp->next=temp;
    return temp;
  }
  temp->next=head->next;
  head->next=temp;
  int t=temp->data;
  temp->data= head->data;
  head->data=t;
  return temp;
}
