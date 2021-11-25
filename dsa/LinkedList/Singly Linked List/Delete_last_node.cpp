#include<iostream>
using namespace std;

struct node
{
  /* data */
  int data;
  node * next;
  node(int x){
    data=x;
    next=NULL;
  }
};
node* deleteLast(node* &head){
  if(head==NULL) return NULL;
  if(head->next==NULL) {
    delete head;
    return NULL;
  }
  node* temp= head;
  while (temp->next->next!=NULL)
  {
    temp=temp->next;
  }
  delete(temp->next);
  temp->next=NULL;
  return head;
}

int main(){

}
