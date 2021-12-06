//  Detect and Delete the Loop from Linkedlist

#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
};
// ! Floyd Algorithm or Tortoise Hare
void deleteloop(node *head){
  node *start=head, *fast=head;
  while(fast != NULL || fast->next!=NULL) {
    if(fast==start) break;
    start=start->next;
    fast=fast->next->next;
  }
  if(start != fast) return;
  start =head;
  while(fast->next != start->next){
    if(fast==start) break;
    start=start->next;
    fast=fast->next;
  }
  fast->next=NULL;
}
