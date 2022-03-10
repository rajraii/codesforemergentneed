#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
  Node(int d)
  {
    data = d;
    left = right = NULL;
  }
};

vector<int> postorder(Node* root){
  vector<int> res;
  stack<Node*> s1,s2;
  s1.push(root);
  while(!s1.empty()){
    root= s1.top();
    s1.pop();
    s2.push(root);
    if(root->left) s1.push(root->left);
    if(root->right) s1.push(root->right);
  } 
  while(!s2.empty()){
    res.push_back(s2.top()->data);
    s2.pop();
  }
  return res;
}

int main(){

return 0;
}