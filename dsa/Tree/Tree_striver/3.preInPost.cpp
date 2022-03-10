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
    } 
    else if(temp.second==2){
      in.push_back(temp.first->data);
      temp.second++;
    }
    else post.push_back(temp.first->data);
  }
}

int main(){

  return 0;
}