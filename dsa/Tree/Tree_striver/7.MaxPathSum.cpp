 #include <bits/stdc++.h>
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

int maxi=0;

int findlength(Node* root){
  if(root==NULL) return 0;

  int lh  = findlength(root->left);
  int rh  = findlength(root->right);
 
  maxi=max(lh+rh+root->data, maxi);

  return max(lh,rh)+root->data;
}

int main(){
  Node *root = new Node(1);
  root->left        = new Node(2);
  root->right       = new Node(3);
  root->left->left  = new Node(4);
  root->left->right = new Node(5);
  findlength(root);
  cout<<maxi<<endl;
  return 0;
}