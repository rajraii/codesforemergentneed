// find the longest subsequence consisting of conseqcutive elements
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

// Naive Approach O(nlogn) Sorting

int main(){
  int n=5;
  int a[n]={3,8,4,5,7};
  sort(a,a+n);
  int res=1,curr=1;
  for(int i=1;i<n;i++){
    if(a[i]==a[i-1]+1){
      curr++;
    }
    else{
      res=max(res,curr);
      curr=1;
    }
  }
  res=max(res,curr);
  cout<<res<<endl;
}

// Efficient Approach O(n) Hashing 

int main(){
  int n=5;
  int a[]={3,8,4,5,7};
  unordered_map<int,int> m;
  for(int i=0;i<n;i++) m[a[i]]++;
  int res=1,curr;
  for(int i=0;i<n;i++){
    if(m.find(a[i]-1)==m.end()){  // Find the starting point of subsequence
      curr=1;
      while(m.find(a[i]+curr)!=m.end())
        curr++;
      res=max(curr,res);
    }
  }
  cout<<res<<endl;
  return 0;
}