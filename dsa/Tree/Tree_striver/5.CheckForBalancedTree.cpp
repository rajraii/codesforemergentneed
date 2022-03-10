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

int check(Node* root){
  if(root==NULL) return 0;
  int lh= check(root->left);
  if(lh==-1)  return -1;
  int rh= check(root->right);
  if(rh==-1)  return -1;

  if(abs(lh-rh) >1) return  -1;

  return  max(lh,rh) + 1;
}

int main(){
  Node *root = new Node(1);
  root->left        = new Node(2);
  root->right       = new Node(3);
  root->left->left  = new Node(4);
  root->left->right = new Node(5);
  if(check(root)==-1) cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
  return 0;
}