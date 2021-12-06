//  Delete node without head pointer

#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
};

// ! we make a make a temp node (next node of the recieved data) and swap its data with the original pointer 
void deletenodewithoutHead(node *ptr){
  node *temp=ptr->next;
  ptr->data=temp->data;
  ptr->next=temp->next;
  delete(temp);
}
