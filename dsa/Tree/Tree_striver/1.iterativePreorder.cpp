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

void print(Node *root)
{
  stack<Node *> s;
  s.push(root);
  while (!s.empty())
  {
    root = s.top();
    s.pop();
    cout << root->data << " ";
    if (s.top()->right)
      s.push(root->right);
    if (s.top()->left)
      s.push(root->left);
  }
}

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(7);
  root->left->left = new Node(3);
  root->left->right = new Node(4);
  root->left->right->left = new Node(5);
  root->left->right->right = new Node(6);
  print(root);
  return 0;
}