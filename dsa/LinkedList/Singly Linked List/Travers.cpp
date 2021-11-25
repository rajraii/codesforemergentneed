#include <iostream>
using namespace std;

struct node
{
  /*
    ! Implementation of Linear List
  */
  int data;
  node *next;
  node(int x)
  {
    data = x;
    next = NULL;
  }
};


node * insert_begin(node *head, int x)
{
  // Inserting a node at the begining
  node *temp=new node(x);
  temp->next=head;
  return temp;
}

node* insert_end(node* head,int x){
  /*
    !Inserion at the end of the linkedlist
  */
  node *temp=new node(x);
  // corner case if linkedlist is empty we have to make a new one
  if(head==NULL) return temp;
  node *curr=head;
  while(curr->next!=NULL){
    curr=curr->next;
  }
  curr->next=temp;
  return head;
}

void display(node *head)
{
  if (head == NULL)
    return;
  cout << head->data << " ";
  display(head->next);
}
int main()
{
  node* head=NULL;
  head= insert_begin(head,30);
  head=insert_end(head,40);
  display(head);
}
