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

bool sameTree(Node* root1, Node* root2){
  if(root1==NULL || root2==NULL) return root1==root2;
  return (root1->data==root2->data)
        && sameTree(root1->left,root2->left) 
        &&  sameTree(root1->right, root2->right);
}


int main(){
  Node *root = new Node(1);
  root->left        = new Node(2);
  root->right       = new Node(3);
  root->left->left  = new Node(4);
  root->left->right = new Node(5);
  return 0;
}