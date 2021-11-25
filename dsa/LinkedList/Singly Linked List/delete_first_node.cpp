// Delete First Node in Linkedlist
#include<iostream>
using namespace std;

struct node{
  int data;
  node* next;
  node(int val){
    data=val;
    next=NULL;
  }
};

// TC O(1)
node* delet(node*head){
  if(head==NULL) return NULL;
  node*temp=head->next;
  delete head;
  return temp;
}

int main(){

}