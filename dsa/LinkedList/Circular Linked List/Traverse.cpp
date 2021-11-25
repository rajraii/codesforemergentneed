// Make a Circlar Linked List

#include<iostream>
using namespace std;

struct node
{
  int data;
  node* next=NULL;
  node(int x){
    data=x;
    next=NULL;
  }
};

void print(node *head){
  if(head==NULL) cout<<NULL<<endl;
  for(node *curr=head->next; curr !=head; curr=curr->next)
    cout<<curr->data<<endl;
}
