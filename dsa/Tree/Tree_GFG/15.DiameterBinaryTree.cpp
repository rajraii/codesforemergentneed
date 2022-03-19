// Find the diameter of the binary tree

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

// ! Naive approach TC O(n2)

int height(Node *root){
  if(root==NULL) return 0;
  return max(height(root->left), height(root->right)) + 1;
}

int diameter(Node *root){
  if(root == NULL) return 0;
  int d1= 1+height(root->left) + height(root->right);
  int d2= diameter(root->left);
  int d3= diameter(root->right);
  return max(d3, max(d1,d2));
}

//  ! Efficient o[timizing the geight function TC O(n)

int Diameter(Node* root, int height){
  if(root==NULL) return 0;
  int lh= Diameter(root->left,height);
  int rh= Diameter(root->right,height);
  height=max(height, lh+rh+1);
  return 1 + max(lh,rh);
}