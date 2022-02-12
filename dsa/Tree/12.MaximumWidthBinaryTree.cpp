// Find the maximum width of the Binary Tree

#include<iostream>
#include<queue>
#include<climits>
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

// ! Level by Level traversal

int maxWidth(Node* root){
  if(root==NULL) return;
  queue<Node*> q;
  q.push(root);
  int res=INT_MIN;
  while(q.empty()==false){
    int count=q.size();
    res=max(res,count);
    for(int i=0;i<count;i++){
      Node* curr= q.front();
      q.pop();
      if(curr->left!=NULL) q.push(curr->left);
      if(curr->right!=NULL) q.push(curr->right);
    }
  }
  return res;
}

