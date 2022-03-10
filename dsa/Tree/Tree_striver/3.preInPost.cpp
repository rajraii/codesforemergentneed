// ! Pre in and post in one traversal

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

void traversal(Node* root){
  stack<pair<Node*, int>> s;
  vector<int> pre, in, post;
  s.push({root,1});
  while(!s.empty()){
    auto temp = s.top();
    s.pop();
    if(temp.second==1){
      pre.push_back(temp.first->data);
      temp.second++;
      s.push(temp);
      if(temp.first->left!=NULL) s.push({temp.first->left, 1});
    } 
    else if(temp.second==2){
      in.push_back(temp.first->data);
      temp.second++;
      s.push(temp);
      if(temp.first->left!=NULL) s.push({temp.first->left, 1});
    }
    else post.push_back(temp.first->data);
  }
  cout<<"preorder"<<endl;
  for(auto i: pre)
    cout<<i<<" ";
  cout<<endl<<"Inorder"<<endl;
  for(auto i: in)
    cout<<i<<" ";
  cout<<endl<<"postorder"<<endl;
  for(auto i: post)
    cout<<i<<" ";
}

int main(){
  Node *root = new Node(1);
  root->left        = new Node(2);
  root->right       = new Node(3);
  root->left->left  = new Node(4);
  root->left->right = new Node(5);
  traversal(root);
  return 0;
}