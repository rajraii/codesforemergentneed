// Detect Loop in linked list

#include<iostream>
#include<unordered_set>
using namespace std;

struct node
{
  int data;
  node *next;
  bool visited;
  node (int x){
    data=x;
    next=NULL;
    visited=false;
  } 
};

// ! Naive- iterative O(n2)

// ! Hashing - TC O(n) AC O (n)

bool detect (node *head){
  unordered_set<node *> s;
  for(node *curr=head; curr != NULL ; curr=curr->next){
    if(s.find(curr->next) != s.end()) return 1;
    s.insert(curr);
  }
  return 0;
}

// ! tortoise hare TC O(n/2)

bool Detect (node *head){
  node *slow =head, *fast=head;
  while(fast != NULL && fast->next != NULL){
    if(fast == NULL) return 1;
    fast=fast->next->next;
    slow= slow->next;
  }
  return 0;
}