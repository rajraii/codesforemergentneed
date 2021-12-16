// Find the previous largest in array

#include<iostream>
#include<stack>
using namespace std;


// Stack Approach 
void check(int a[], int n){
  stack<int> s;
  s.push(a[0]);
  for(int i=0;i<n;i++){
    while(s.empty()==false && s.top()<=a[i]) s.pop();
    int pg=(s.empty()) ? -1 : s.top();
    cout<<pg<<" ";
    s.push(a[i]);  
  }
}


int main(){
  int a[]={1,9,7,2,3};
  check(a,5);
}
