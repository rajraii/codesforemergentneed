// Given a number n print first n number such that all these numbers have digits in set {5,6}
// add 5 and 6 to the queue then make a choice to append wither 5 or 6 tp the number
// 10
// 5 6 55 56 65 66 555 556 565 566
#include<iostream>
#include<queue>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  queue<string> q;
  q.push("5");
  q.push("6");
  for(int i=0;i<n;i++){
    string curr= q.front();
    cout<<curr<<" ";
    q.pop();
    q.push(curr+"5");
    q.push(curr+"6");
  }
  return 0;
}