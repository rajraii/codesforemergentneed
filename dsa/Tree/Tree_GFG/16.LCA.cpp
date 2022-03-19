// Find the lowest common ancestor in tree

#include<iostream>
#include<vector>
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

// ! Naive TC theta(n) + Theta(n) 

bool findPath(Node *root, vector<Node*> &p, int n){
  if(root==NULL) return false;
  p.push_back(root);
  if(root->key==n) return true;
  if(findPath(root->left,p,n) || findPath(root->right,p,n)) return true;
  p.pop_back();
  return false;
}

Node* Lca(Node* root, int n1, int n2){
  vector<Node*> p1,p2;
  if(findPath(root,p1,n1) == false || findPath(root,p2,n2)==false) return NULL;
  for(int i=0;i<p1.size()-1 && i<p2.size()-1;i++){
    if(p1[i+1] != p2[i+1]) return p1[i];
    return NULL;
  }
}

//  ! Efficient Solution TC Theta(n)
// assumes both n1 and n2 are present in the Tree

Node* LcaEff(Node* root, int n1, int n2){
  if(root == NULL) return NULL;
  if(root->key==n1 || root->key==n2) return root;
  Node* lca1= LcaEff(root->left,n1,n2);
  Node* lca2= LcaEff(root->right,n1,n2);
  if(lca1!=NULL && lca2 != NULL) return root;
  if(lca1!=NULL) return lca1;
  else return lca2;
}