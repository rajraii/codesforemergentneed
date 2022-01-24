// Reverse a queue 

#include<iostream>
#include<queue>
using namespace std;

// ! Naive approach - using a stack increasing aucxillary space 

#include<stack>

void reverse(queue<int> &q){
  stack<int> s;
  while(!q.empty()){
    s.push(q.front());
    q.pop();
  }
  while(!s.empty()){
    q.push(s.top());
    s.pop();
  }
}

// ! Efficient approach - Recursive function

void Reverse(queue<int> &q){
  if(q.empty()) return;
  int x=q.front();
  q.pop();
  Reverse(q);
  q.push(x);
}

