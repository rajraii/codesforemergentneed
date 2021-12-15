// Stock Span Problem

#include<iostream>
#include <stack>
using namespace std;


// ! Naive - Iterative O(n2)

// int main(){
//   int a[]={13,15,12,14,16,8,6,4,10,30};
//   for(int i=0;i<10;i++){
//     int count=1;
//     for(int j=i-1;j>=0 && a[j]<=a[i];j--){
//       count++;
//     }
//     cout<<count<<" ";
//   }
// }

// ! Efficient O(n) AC O(n)

int main(){
  int a[]={13,15,12,14,16,8,6,4,10,30};
  stack<int> s;
  s.push(0);
  cout<<"1"<<" "; 
  for(int i=1;i<10;i++){
    while( !s.empty() && a[s.top()]<= a[i]){
      s.pop();
    }
    int span= s.empty() ? i+1 : i-s.top();
    cout<<span<<" "; 
    s.push(i);
  }
}