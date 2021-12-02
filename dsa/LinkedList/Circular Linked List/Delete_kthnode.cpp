// ! Delete Kth node from Circular Linked lIst

#include<iostream>
using namespace std;
 
struct node{
  int data;
  node *next;
};

node* deleteHead(node *head){}

node* Delete_kth(node *head, int k){
  if (head== NULL) return head;
  if(k==1)
    return deleteHead(head);
  node *curr=head;
  for(int i=0;i<k-2;i++)
    curr=curr->next;
  node *temp=curr->next;
  curr->next=curr->next->next;
  delete temp;
  return head;
}