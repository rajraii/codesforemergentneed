// Check if the Tree is balanced - height of left subtree should be equal to right subtree

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


// ! Naive solution TC O(N2)

int height(Node *root){
  if(root==NULL) return 0;
  return max(height(root->left), height(root->right)) + 1;
}

bool checkBalanced(Node* root){
  if(root==NULL) return ;
  int lh= height(root->left);
  int rh= height(root->right);
  return (abs(lh-rh) <= 1 && checkBalanced(root->left) && checkBalanced(root->right));
}

// ! efficient - if we check if subtree is balanced it also return the height of the subtree

int isBalanced(Node* root){
  if(root == NULL) return 0;
  int lh= isBalanced(root->left);
  if(lh== -1) return -1;
  int rh  = isBalanced(root->right);
  if(rh== -1) return -1;
  if(abs(lh-rh)>1) return -1;
  return max(lh,rh) +1;
}

