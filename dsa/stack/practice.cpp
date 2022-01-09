#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void prevgreat(vector<int> a, int n){
  stack<int> s;
  s.push(a[0]);
  for(int i=1;i<n;i++){
    while(!s.empty() && s.top()<=a[i]) s.pop();
    int x= s.empty() ? -1 : s.top();
    cout<<x<<" ";
    s.push(a[i]);
  }
}

vector<int> nextgreat(vector<int> a, int n){
  vector<int>res;
  int j=n-1;
  for
}