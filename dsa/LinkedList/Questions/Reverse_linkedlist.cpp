// Reverse a linked list

#include<iostream>
#include<vector>
using namespace std;

struct node{
  int data;
  node *next;
};

// ! Naive - make a new linked list TC O(n) and AC O(n)
void reverse(node *head){
  vector<int> a;
  for(node *curr=head; curr!=head;curr->next) a.push_back(curr->data);
  for(node *curr=head; curr != NULL; curr->next)
  {
    curr->data=a.back();
    a.pop_back();
  }
}

// ! Efficient Approach- changing the links TC O(n) and AC O(1)

void reverse(node *head){
  node *curr=head;
  node *prev=NULL;
  while(curr != NULL){
    node *temp= curr->next;
    curr->next= prev;
    prev=curr;
    curr=temp;
  }
}