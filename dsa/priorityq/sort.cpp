#include<iostream>
#include<set>
#include<queue>
#include<vector>
using namespace std;
int main(){
  vector<int> v={1,2,3,4,5};
  // set<int>s;
  // for(int i=0;i<5;i++) s.insert(a[i]);
  // cout<<*s.begin()<<;
  priority_queue<int> p;
  for(auto i: v) p.push(i);
  while(!p.empty()) {
    cout<<p.top()<<" ";
    p.pop();
  }
}