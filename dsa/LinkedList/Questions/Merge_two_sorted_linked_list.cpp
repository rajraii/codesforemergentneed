// Merge Two SOrted Linkedlist

#include<iostream>
using namespace std;

struct node{
  int data;
  node*next;
  node(int x){
    data=x;
    next=NULL;
  }
};

node *sorted(node* a, node*b){
  if(a==NULL) return b;
  if(b=NULL) return a;
  node *head=NULL, *tail=NULL;
  if(a->data <= b->data)
    {head=tail=a; a=a->next;}
  else
    {head=tail=b; b=b->next;} 
  while(a && b) {
    if(a->data <= b->data){
      tail->next=a; 
      tail=a;
      a=a->next;
    }
    else {
      tail->next=b;
      tail=b;
      b=b->next;
    }
    if(a==NULL) tail->next=b;
    else tail->next=a;
  }
  return head;
}