// Find the height of the tree
#include<iostream>
using namespace std;

// TC O(n) AC O(h)

struct Node{
  int key;
  Node* left;
  Node* right;
  Node(int k){
    key=k;
    left=right=NULL;
  }
};

int height(Node *root){
  if(root==NULL) return 0;
  return max(height(root->left), height(root->right)) + 1;
}

int main(){
  Node* root=new Node(10);
  root->left=new Node(8);
  root->right=new Node(30);
  root->left->right=new Node(50);
  cout<<height(root);
}