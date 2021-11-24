// Delete head of linkedlist

#include<iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;
  node *prev;
  node(int x)
  {
    data = x;
    next = NULL;
    prev = NULL;
  }
};

// ! Delet head of Linkedlist 

node* delet(node *head){
  if(head==NULL) return NULL;
  if(head->next==NULL){
    delete head;
    return NULL;
  }
  node* temp= head;
  head=head->next;
  head->prev=NULL;
  delete temp;
  return head;
}