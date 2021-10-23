// Given an array find the next greater elem position wise not value wise
// position closest on the right side
// i/p 3 15 10 8 6 12 9 18
// o/p 15 18 12 12 12 18 18 -1
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
  int n; cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++){
    int a; cin>>a;
    v.push_back(a);
  }
  
  // Naive approach of TC 0(n)

  // for(int i=0;i<n;i++){
  //   int j;
  //   for(j=i+1;j<n;j++){
  //     if(v[j]>v[i]){
  //       cout<<v[j]<<" ";
  //       break;
  //     }
  //     if(j==n) cout<<-1<<" ";
  //   }
  //}


  //Optimal apparoach with O(n)

  stack<int> s;
  s.push(v[n-1]);
  for(int i=0;i<n;i++){
    while(!s.empty() && s.top()<=v[i]) 
      s.pop();
    int ng=(s.empty()) ? (-1): (s.top());
    cout<<ng<<" ";
    s.push(v[i]);
  }  
}