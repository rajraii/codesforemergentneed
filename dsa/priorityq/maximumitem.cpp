#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v={1,20,3,40,5};
  int sum=10;
  priority_queue<int,vector<int>,greater<int>> p(v.begin(),v.end());
  int res(0);
  while(!p.empty() && sum>=0 && p.top()<=sum){
    sum-=p.top();
    res++;
    p.pop();
  }
  cout<<res<<endl;
return 0;
}