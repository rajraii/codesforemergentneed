// ! prev ptr of head points to last element and last element next points to head

#include<iostream>
using namespace std;

struct node{
  int data;
  node*next;
  node*prev;
  node(int d){
    data=d;
  }
};


node *insert(node *head, int x){
  node *temp=new node(x);
  if(head==NULL){
    temp->next=temp;
    temp->prev=temp;
    return temp;
  }
  temp->prev=head->prev;
  temp->next=head;
  head->prev=temp;
  return temp;
}