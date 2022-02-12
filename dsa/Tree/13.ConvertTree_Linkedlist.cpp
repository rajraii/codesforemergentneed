// convert Binary Tree to lInkedlist with inplace

#include<iostream>
using namespace std;

struct Node{
  int key;
  Node* left;
  Node* right;
  Node(int k){
    this->key=k;
    this->left=NULL;
    this->right=NULL;
  }
};


Node* BtToDLL(Node* root){
  static Node *prev=NULL;
  if(root==NULL) return root;
  Node* head= BtToDLL(root->left);
  if(prev==NULL) head=root;
  else {
    root->left=prev;
    root->right=root;
  }
  prev=root;
  BtToDLL(root->right);
  return head;
}
