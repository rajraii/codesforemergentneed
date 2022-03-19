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

class Traversal{
  public:
  void pre
  
  traversal(Node* node){
    if(node==NULL) return;
    vector<int>v;
    stack<Node*> s;
    s.push(node);
    while(!s.empty()){
      Node* root= s.top();
      s.pop();
      v.push_back(root->data);
      if(root->right) s.push(root->right);
      if(root->left) s.push(root->left);
    }
    for(auto i: v) cout<<i<<" ";
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
  Traversal t;
  return 0;
}

