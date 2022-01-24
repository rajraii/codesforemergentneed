// Print all number till N consisting only 5 or 6

#include<iostream>
#include<queue>
using namespace std;

// !Naive Approach - make a infinite loop and work through it

//  ! efficient Approach - make a queue and concate 5 or 6 everytime making a tree

void print(int n){
  queue<string> q;
  q.push("5");
  q.push("6");
  for(int count=0; count<n; count++){
    string curr= q.front();
    cout<<curr<<" ";
    q.pop();
    q.push(curr + "5");
    q.push(curr + "6");
  }
}

int main(){
  print(10);
}