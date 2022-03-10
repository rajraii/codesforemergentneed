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

void zigZag(Node* root){
  if(root==NULL) return;
  queue<Node*> q;
  q.push(root);
  vector<vector<int>> res;
  while(!q.empty()){
    int size= q.size();
    bool flag =true;
    vector<int> row;
    for(int i=0;i<size;i++){
      Node* front= q.front();
      q.pop();
      int index= flag ? i : size-i-1;
      row[index] = front->data;
      if(front->left) q.push(front->left);
      if(front->right) q.push(front->right);
    }
    res.push_back(row);
    flag= !flag;
  }
  return;
}

int main(){
  Node *root = new Node(1);
  root->left        = new Node(2);
  root->right       = new Node(3);
  root->left->left  = new Node(4);
  root->left->right = new Node(5);
  
  return 0;
}