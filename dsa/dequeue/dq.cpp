#include<iostream>
#include<deque>
using namespace std;
int main(){ //Benefit over LIST is Random access
  int n; cin>>n;
  deque<int> dq;
  for(int i=0;i<n;i++){
    int a; cin>>a;
    dq.push_back(a);
  }
  for(auto x: dq) cout<<x<<" ";
}  