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

vector<int> postorder2(Node* root){
  vector<int> res;
  stack<Node*> s;
  Node* curr=root;
  s.push(curr);
  while(curr!=NULL || !s.empty()){
    if(curr!=NULL){
      s.push(curr);
      curr=curr->left;
    }
    else{
      Node* temp=s.top()->right;
      if(temp==NULL){
        temp=s.top();
        s.pop();
        res.push_back(temp->data);
        while(!s.empty() || temp ==s.top()->right){
          temp=s.top(), s.pop();
          res.push_back(temp->data);
        }
      }
      else curr=temp;
    }
  }
  return res;
}

int main(){

return 0;
}