#include<iostream>
#include<stack>
#include<vector>
using namespace std; 


void maxArea(int a[], int n){
  stack<int> s;
  int maxA(0);
  for(int i=0;i<=n; i++){
    while( !s.empty() && (i==n || a[s.top()]>=a[i])) s.pop();
    int h= a[s.top()];
    int width= s.empty() ? i : i-s.top()-1;
    int area= h*width;
    maxA= max(maxA, area);
    s.push(i);
  }
  cout<<maxA;
}