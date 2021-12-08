// Pairwise swap in linked list

#include<iostream>
using namespace std;

struct node {
  int data;
  node *next;
};

//  ! Method1  Swapping
void pairwiseswap(node *head){
  if(head==NULL || head->next==NULL) return;
  node *curr=head;
  while(curr->next != NULL){
    swap(curr->data, curr->next->data);
    curr=curr->next->next;
  }  
}

// ! Method2 chaining pointer

node *pairwiseSwap(node *head){
  if(head==NULL || head->next==NULL) return;
  node *curr=head->next->next;
  node *prev=head;
  head=head->next;
  head->next=prev;
  while(curr != NULL && curr->next != NULL){
    prev->next=curr->next;
    prev=curr;
    node *next=curr->next->next;
    curr->next->next=curr;
    curr=next;
  }
  prev->next=curr;
  return head;
}
