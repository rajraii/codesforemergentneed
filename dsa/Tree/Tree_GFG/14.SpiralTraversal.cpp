//  Spiral order traversal in tree

#include<iostream>
#include<queue>
#include<stack>
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


// ! Method 1

void printSpiral(Node* root){
  if(root == NULL) return;
  queue<Node*> q;
  stack<int>s;
  bool reverse =false;
  q.push(root);
  while(q.empty() == false){
    int count=q.size();
    for(int i=0;i<count;i++){
      Node* curr= q.front();
      q.pop();
      if(reverse) s.push(curr->key);
      else cout<<curr->key<<" ";
      if(curr->left!=NULL) q.push(curr->left);
      if(curr->right!=NULL) q.push(curr->right);
    }
    if(reverse){
      while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
      }
    }
    reverse=!reverse;
    cout<<'\n';
  }
}


// ! Efficient Approach using two stack

void printspiral(Node*root){
  if(root==NULL) return;
  stack<Node*> s1, s2;
  s1.push(root);
  while(s1.empty()==false || s2.empty()==false){
    while(s1.empty()==false){
      Node* curr=s1.top();
      s1.pop();
      cout<<curr->key<<" ";
      if(curr->left!=false) s2.push(curr->left);
      if(curr->right!=false) s2.push(curr->right);
    }
    while(s2.empty()==false){
      Node*curr=s2.top();
      s2.pop();
      cout<<curr->key<<" ";
      if(curr->left!=false) s1.push(curr->left);
      if(curr->right!=false) s1.push(curr->right);
    }
  }
}