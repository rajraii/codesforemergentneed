#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *left;
  Node* right;
  Node(int d){
    data=d;
    left=right=NULL;
  }
};

int max_depth(Node* root){
  if(root==NULL) return 0;

  int lh= max_depth(root->left);
  int rh= max_depth(root->right);

  return 1 + max(lh,rh);
}

int main(){
  Node *root = new Node(1);
  root->left        = new Node(2);
  root->right       = new Node(3);
  root->left->left  = new Node(4);
  root->left->right = new Node(5);
  cout<<max_depth(root);
  return 0;
}