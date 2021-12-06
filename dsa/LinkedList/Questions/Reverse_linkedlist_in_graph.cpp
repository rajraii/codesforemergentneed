// Reverse a linked list in graph

 #include<iostream>
using namespace std;

struct node
{
  int data;
  node *next; 
};

// ! Method 1

node  *reverse(node *head, int k){
  node *curr=head;
  node *prev=NULL, *next=NULL;
  int count(0);
  while(curr != NULL && count< k){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    count++;
  }
  if(next !=NULL){
    node *resthead=reverse(next,k);
    head->next=resthead;
  }
}

// ! Method 2

node *Reverse(node *head, int k){
  node *curr=head, *prevfirst=NULL;
  bool isfirstPass=true;
  while(curr != NULL){
    node *first=curr, *prev=NULL;
    int count=0;
    while(curr!=NULL && count < k){
      node *next= curr->next;
      curr->next=prev;
      prev=curr;
      curr=next;
      count++;
    }
    if(isfirstPass){
      head=prev;
      isfirstPass=false;
    }
    else{prevfirst->next=prev;}
    prevfirst=first;
  }
  return head;
}