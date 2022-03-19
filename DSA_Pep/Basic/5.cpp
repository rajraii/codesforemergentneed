#include <bits/stdc++.h>
using namespace std;

vector<string> rec(int n){
  vector<string> path;
  if(n==0) {
    path.push_back("");
    return path;
  }
  else if( n<0){
    return path;
  }

  vector<string> p1= rec(n-1);
  vector<string> p2= rec(n-2);
  vector<string> p3= rec(n-3);
  for(auto i: p1){
    path.push_back("1" + i);
  }
  for(auto i: p2){
    path.push_back("2" + i);
  }
  for(auto i: p3){
    path.push_back("3" + i);
  }

  return path;
}

int main(){
  // int n; cin>>n;
  vector<string> ans= rec(4);
  for(auto i: ans) cout<< i<<endl;
return 0;
}

