//  Revrse a linked list recusively

#include<iostream>
using namespace std;
struct node{
  int data;
  node *next;
};

// ! Method -1

node *reverse(node *head){
 if(head==NULL) return NULL;
 node *resthead= reverse(head->next);
 node *resttail=head->next;
 resttail->next==head;
 head->next=NULL;
 return resthead; 
}  

// ! M ethod -2 Reverse first n-1 node and then linke other


