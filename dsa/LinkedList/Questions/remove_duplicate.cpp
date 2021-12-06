// Remove duplicates from Sorted linkedlist

#include<iostream>
using namespace std;

struct node
{
  int data;
  node *next; 
};


// ! Method -1
void remove(node *head){
  node *curr=head;
  while(curr != NULL && curr->next != NULL){
    if(curr->data==curr->next->data){
      node *temp=curr->next;
      curr->next=curr->next->next;
      delete temp;
    }
    else curr=curr->next;
  }
}

