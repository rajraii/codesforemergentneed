// Reverse first K item of Queue
// i/p 10 20 30 40 50 60
// o/p 30 20 10 40 50 60

#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
  int n; cin>>n;
  queue<int> q;
  for(int i=0;i<n;i++){
    int a; cin>>a;
    q.push(a);
  }
  int k=3;
  stack<int> s;
  for(int i=0;i<k;i++){
    s.push(q.front());  
    q.pop();
  }
  while(!s.empty()){
    q.push(s.top());  //40 50 30 20 10 
    s.pop();
  }
  for(int i=0;i<q.size()-k;i++){
    q.push(q.front());  // 40 50 30 20 10 40
    q.pop();  // 50 30 20 10 40
  }
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }
  
}