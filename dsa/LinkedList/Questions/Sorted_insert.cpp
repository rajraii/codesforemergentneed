// insert in a sorted linked list at correct position in sorted manner

#include<iostream>
using namespace std;

struct node
{
  int data;
  node *next;
  node(int d){data=d;}
};

node *sorted_insert(node *head, int x){
  node *temp=new node (x);
  if(head==NULL) return temp;
  if(x<head->data){
    temp->next=head;
    return temp;
  }
  node *curr=head;
  while(curr->next != NULL && curr->next->data < temp->data)
    curr=curr->next;
  temp->next=curr->next;
  curr->next=temp;
  return head;
}