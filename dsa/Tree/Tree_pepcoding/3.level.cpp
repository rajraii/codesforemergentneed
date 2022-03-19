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
  public:
  // void 

  void traversal(Node* node){
    if(node==NULL) return;
    vector<vector<int>> res;
    queue<Node*> s;
    s.push(node);
    while(!s.empty()){
      int size= s.size();
      vector<int> temp;
      for(int i=0;i<size;i++){
        Node* curr= s.front();
        s.pop();
        temp.push_back(curr->data);
        if(curr->left) s.push(curr->left);
        if(curr->right) s.push(curr->right);
      }
      res.push_back(temp);
    }
    for(auto i: res){
      for(auto j: i){
        cout<<j<<' ';
      }
      cout<<endl;
    }
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
  t.traversal(root); 
  return 0;
}