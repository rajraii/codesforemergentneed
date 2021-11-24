// Make a doubly LInked list
#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;
  node *prev;
  node(int x)
  {
    data = x;
    next = NULL;
    prev = NULL;
  }
};

node* insert(node *head, int x){
  node *temp=new node(x);
  if(head==NULL){
    temp->prev=NULL;
    temp->next=NULL;
    return temp;;
  }
  node *curr=head;
  while(curr->next!=NULL){
    curr=curr->next;
  }
  temp->prev=curr;
  temp->next=NULL;
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
int main(){
  node*head=NULL;
  head=insert(head,10);
  head=insert(head,20);
  head=insert(head,30);
  head=insert(head,40);
  display(head);
}