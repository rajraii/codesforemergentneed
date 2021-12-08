// Clone a Linkedlist with 2 pointer
#include<iostream>
#include<unordered_map>
using namespace std;

struct node{
  int data;
  node *next;
  node *random;
  node(int x){
    data=x;
    next=NULL;
    random=NULL;
  }
};

// ! Naive Clone With double iteration O(n^2)
/* first we iterate through linked list, and get the random pointer. then we traverse through the ist again with 2nd loop till we get that pointer and mark that as the random pointer destination */

// ! Better Approach with Hashing TC O(n) and AC O(n)

node *push(node *head,int x){
  node *temp=new node(x);
  temp->next-head;
  return temp;
} 

node *clone(node *head){
  node *curr=head;
  node *temp=NULL;
  unordered_map<node*, node*> m;
  while(curr !=NULL){
    temp=new node(curr->data);
    m[curr]=temp;
    curr=curr->next;
  }
  curr=head;
  while(curr != NULL){
    temp=m[curr];
    temp->next=m[curr->next];
    temp->random=m[curr->random];
    curr=curr->next;
  }
  return m[head];
}


//  ! Efficient Approach Tc O(n) AC O(1)
/*
  step 1:  create a copy of every node 
  step 2:  copy the random pointer of the cloned node with th eoriginal node
  step 3:  break the nodes to get the original Linked list
*/
node *push(node *head, int x){
  node *temp=new node (x);
  temp->next=head;
  return temp;
}

void display(node *head){
  while(head->next != NULL){
    cout<<head->data<<"->";
    head=head->next;
  }
}

node *Clone(node *head){
  node *curr=head;
  while(curr != NULL){
    node *next=curr->next;
    curr->next=new node(curr->data);
    curr->next->next=next;
    curr=next;
  }
  for(curr=head; curr != NULL; curr=curr->next->next)
    curr->next->random=(curr->random->next)? curr->random->next : NULL;
  
  

}