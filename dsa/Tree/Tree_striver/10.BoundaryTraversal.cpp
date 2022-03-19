#include<bits/stdc++.h>
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

class traversal{
  bool isLeaf(Node* node){
    if(node->left!=NULL) return false;
    if(node->right!=NULL) return false;
    return true;
  }
  void addleft(Node* root, vector<int> &res){
    Node* curr= root->left;
    while(curr){
      if(!isLeaf(curr)) res.push_back(curr->data);
      if(curr->left) curr= curr->left;
      else curr=curr->right;
    }
  }
  void addRight(Node* root, vector<int> &res){
    Node* curr= root->right;
    vector<int> temp;
    while(curr){
      if(!isLeaf(curr)) temp.push_back(curr->data);
      if(curr->right) curr= curr->right;
      else curr=curr->left;
    }
    for(int i= temp.size()-1; i>= 0;i--)
      res.push_back(temp[i]);
  }
  void addLeaf(Node* root,vector<int> &res){
    if(isLeaf(root)){
      res.push_back(root->data);
      return;
    }
    if(root->left) addLeaf(root->left,res);
    if(root->right) addLeaf(root->right,res);
  }
  public:
  vector<int> boundary(Node* root){
    vector<int> res;
    if(!root) return res;
    if(!isLeaf(root)) res.push_back(root->data);
    addleft(root,res);
    addLeaf(root,res);
    addRight(root,res);
    // for(auto i: res) cout<<i<<" ";
    return res;
  }
};


int main(){
  struct Node* root = new Node(20);
  root->left = new Node(8);
  root->left->left = new Node(4);
  root->left->right = new Node(12);
  root->left->right->left = new Node(10);
  root->left->right->right = new Node(14);
  root->right = new Node(22);
  root->right->right = new Node(25);
  traversal t;
  vector<int>res=t.boundary(root);
  for(auto i: res) cout<<i<<" ";
  return 0;
}