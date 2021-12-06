//  Segregate Even and odd in a linked list

#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
};

// ! Two linked list approach - Make two linked list and then connect them together

node *segregate(node *head){
  node *curr=head;
  node *eS=NULL, *eE=NULL, *oS=NULL, *oE=NULL;
  while(curr != NULL){
    int x= curr->data;
    if(x%2==0){
      if(eS==NULL){
        eS=curr;
        eE=eS;
      }
      else{
        eE->next=curr;
        eE=eE->next;
      }
    }
    else {
      if(oS==NULL){
        oS=curr;
        oE=oS;
      }
      else{
        oE->next=curr;
        oE=oE->next;
      }
    }
  }
  if(oS==NULL || oE==NULL) return head;
  eE->next=oS;
  oE=NULL;
  return eS;
}