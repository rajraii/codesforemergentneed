#include<iostream>
#include<set>
#include<queue>
#include<vector>
using namespace std;
int main(){
  vector<int> v={18,-9,45,15,18};
  // set<int>s;
  // for(int i=0;i<5;i++) s.insert(a[i]);
  // cout<<*s.begin()<<;
  priority_queue<int> p(v.begin(),v.end());
  while(!p.empty()) {
    cout<<p.top()<<" ";
    p.pop();
  }
}