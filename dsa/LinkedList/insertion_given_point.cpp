// !Insert at a given Point in cpp

#include<iostream>
using namespace std;

class node{
  public:
    int data;
    node* next;
    node(int x){
      data=x;
      next=NULL;
    }
};

node* insertatMiddle(node* head, int pos, int x){
  node* temp=new node(x);
  if(pos==1){
    temp->next=head;
    return temp;
  } 
  node* curr=head;
  for(int i=1;i<pos-2 && curr!=NULL ;i++){
    curr=curr->next;
  }
  if(curr==NULL) return head;
  temp->next=curr->next;
  curr->next=temp;
  return head;
}