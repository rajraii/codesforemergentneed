#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *left;
  Node *right;
  Node(int d){
    data = d;
    left = right = NULL;
  }
};

class Tree{
  public:
  int size(Node* root){
    if(root==NULL) return 0;
    int lh= size(root->left);
    int rh= size(root->right);
    return lh+rh+1;
  }
  int sum(Node* root){
    if(root==NULL) return 0;
    int ls= sum(root->left);
    int rs= sum(root->right);
    return ls+rs+root->data;
  }
  int height(Node* root){
    if(root==NULL) return 0;
    int lh= height(root->left);
    int rh= height(root->left);
    return 1 + max(lh, rh);
  }
  int Max(Node* root){
    if(root==NULL) return INT_MIN;
    int lh =Max(root->left);
    int rh= Max(root->right);
    return max(root->data, max(lh,rh));
  }
};

int main(){
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(7);
  root->left->left = new Node(3);
  root->left->right = new Node(4);
  root->left->right->left = new Node(5);
  root->left->right->right = new Node(6);
  Tree t;
  cout<< t.height(root);
  return 0;
}