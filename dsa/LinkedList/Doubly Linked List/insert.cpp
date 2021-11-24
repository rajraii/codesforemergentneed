// Insert at the begining of the DLL

#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;
  node* prev;
  node(int x){
    data=x;
    next=NULL;
    prev=NULL;
  }
};

// !Insert at begin
node* insert(node* head, int x){
  node* temp=new node(x);
  temp->next=head;
  if(head!=NULL) head->prev=temp;
  return temp;
}

//! Insert at end
node* insertE(node* head, int x){
  node* temp=new node(x);
  if(head==NULL){
    return temp;
  }
  if(head->next==NULL){
    head->next=temp;
    temp->prev=head;
    return temp;
  }
  node*curr=head;
  while(curr!=NULL)
    curr=curr->next;
  curr->next=temp;
  temp->prev=curr;
  return head;
}




void display(node* head){
  node*curr=head;
  while(curr!=NULL){
    cout<<curr->data<<" ";
    curr=curr->next;
  }
}

int main(){
  node* head=NULL;
  head=insert(head,40);
  head=insert(head,30);
  head=insert(head,20);
  display(head);
}
