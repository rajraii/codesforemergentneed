// Print the next greater element of every element

#include <bits/stdc++.h>
using namespace std;

// Niave iterative O(n2)

void Ncheck(int a[], int n){
  for(int i=0;i<n;i++){
    int flag=-1;
    for(int j=i+1;j<n;j++){
      if(a[j]>a[i]){
        flag=a[j];
        break;
      }
    }
    if(flag !=-1) cout<<flag<<" ";
    else cout<<flag<<" ";
  }
}
 
//  Stack 

void check(int a[], int n){
  stack<int> s;
  cout<<"-1"<<" ";
  s.push(a[n-1]);
  for(int i=n-2;i>=0;i--){
    while(s.empty()==false && s.top()<=a[i]) s.pop();
    int next= (s.empty()) ? (-1) : (s.top());
    cout<<next<<" ";  //print in reverse order
    s.push(a[i]);
  }
}

int main(){
  int a[]={5,15,10,8,6,12,9,18};
  int n=sizeof(a)/sizeof(a[0]);
  Ncheck(a,n);
  cout<<endl;
  check(a,n);
return 0;
}