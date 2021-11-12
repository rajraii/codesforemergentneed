// print all element who occur more than n/k times
#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

Nave Approach Sorting and counting O(nlogn)

int main(){
  int n=7,k=2;
  int a[n]={10,10,20,30,20,10,10};
  int x=n/k;
  sort(a,a+n);
  int i=1,count=1;
  while(i<n){
    while(i<n && a[i]==a[i-1]){
      count++; i++;
    }
    if(count>n/k) cout<<a[i-1]<<" ";
    count=1;
    i++;
  }
}

// Efficient approach hashing o(n)

int main(){
  int n=7,k=2;
  int a[n]={10,10,20,30,20,10,10};
  unordered_map<int,int> m;
  
  for(int i=0;i<n;i++){
    m[a[i]]++;
  }
  for(auto i: m) 
    if(i.second>=(n/k)) 
      cout<<i.first<<" ";
}