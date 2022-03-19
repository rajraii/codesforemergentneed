// Find the farthest Node from the given Node

#include<iostream>
using namespace std;

struct Node
{
  int data;
  Node* left;
  Node* right;
  Node(int d){
    data=d;
    left=right=NULL;
  }
};

int burnTime(Node* root, int leaf, int &dist, int res){
  if(root==NULL) return 0;
  if(root->data) {
    dist=0; 
    return 1;
  }
  int ldist =-1, rdist=-1;
  int lh= burnTime(root->left,leaf, ldist, res);
  int rh= burnTime(root->left,leaf, rdist, res);
  if(ldist != -1){
    dist = ldist =1;
    res= max(res, dist + lh);
  }
  else if( rdist != -1){
    dist = rdist +1;
    res= max(res,rdist+rh);
  }
  return max(lh,rh) + 1; 
} 