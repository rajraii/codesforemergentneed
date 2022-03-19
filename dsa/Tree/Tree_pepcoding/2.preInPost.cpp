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
  vector<int> pre,in,post;
  public:
  void traversal(Node* node){
    if(node==NULL) return;
    pre.push_back(node->data);
    traversal(node->left);
    in.push_back(node->data);
    traversal(node->right);
    post.push_back(node->data);
  }

  void print(Node* node){
    if(node==NULL) return;
    traversal(node);
    for(auto i: pre) cout<<i<<" ";
    cout<<endl;
    for(auto i: in) cout<<i<<" ";
    cout<<endl;
    for(auto i: post) cout<<i<<" ";
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
  t.print(root);
  return 0;
}