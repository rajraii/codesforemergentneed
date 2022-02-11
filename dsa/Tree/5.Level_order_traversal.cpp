//  Breadth first Search
// we use queue for this

#include<iostream>
#include<queue>
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

//  ! TC Theta (n) AC O(n)  or theta(w) 

void printLevel(Node *root){
  if(root==NULL) return;
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
    Node *curr= q.front();
    q.pop();
    cout<<curr->key;
    if(!curr->left) q.push(curr->left);
    if(!curr->right) q.push(curr->right);
  }
}
