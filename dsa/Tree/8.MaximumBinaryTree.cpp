//  Find the Maximum element in Binary tree

#include<iostream>
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

// ! Recursive Implementation TC O(n) AC O(h)

int getMax(Node* root){
  if(root == NULL) return INT_MIN;
  return max(root->key, max(getMax(root->left),getMax(root->right)));
} 

//  ! Queue implementation TC O(n) AC O(W)

int main(){
  Node* root = new Node(20);
  root->left= new Node(80);
  root->right= new Node(30);
  root->right->left= new Node(40);
  root->right->left= new Node(50);
  cout<<getMax(root)<<endl;
}