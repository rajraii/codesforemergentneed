//  Print nodes present at distance k

#include<iostream>
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

void distance(Node* root, int k){
  if(root==NULL || k < 0) return;
  if(k==0) {
    cout<<root->key<<' ';
    return;
  }
  distance(root->left,k-1);
  distance(root->right,k-1);
}

int main(){
  Node* root= new Node(10);
  root->left =new Node(20);
  root->left->left= new Node(40);
  root->left->right= new Node(50);
  root->right= new Node(30);
  root->right->right= new Node(70);
  root->right->right->right= new Node(80);
  int k=2;
  distance(root,k);
}