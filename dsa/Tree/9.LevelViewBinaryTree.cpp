//  Print Left View of Binary tree

#include<iostream>
#include<queue>
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

int maxLevel=0;

// ! Recursive TC O(n) AC O(h)

void printLeft(Node* root, int level){
  if(root==NULL) return;
  if(maxLevel < level){
    cout<<root->key<<" ";
    maxLevel=level;
  }
  printLeft(root->left, level+1);
  printLeft(root->right, level+1);
}

void printLeftView(Node* root){
  printLeft(root, 1);
}

// ! Level Order traversal TC O(n) AC O(w)

void printleftLine(Node *root){
  if(root==NULL) return;
  queue<Node*> q;
  q.push(root);
  while(q.empty()==false){
    int count=q.size();
    for(int i=0;i<count;i++){
      Node* curr= q.front();
      q.pop();
      if(i==0) cout<<curr->key<<" ";
      if(curr->left != NULL) q.push(curr->left);
      if(curr->right != NULL) q.push(curr->right);
    }
  }
}

int main(){
  Node* root= new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->right->left = new Node(40);
  root->right->right = new Node(50);
  printLeftView(root);
  cout<<endl;
  printleftLine(root);
}