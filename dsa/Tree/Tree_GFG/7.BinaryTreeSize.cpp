// Find the size of Binary tree

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

// ! Recursive Implementation TC O(n) AC (h+1)

int getSize(Node* root){
  if(root == NULL) return 0;
  return 1 + getSize(root->left) + getSize(root->right);
}

