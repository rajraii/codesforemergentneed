// find the longest subarray with equal number of 0 and 1

#include<iostream>
#include<unordered_map>
using namespace std;

// Naive Approach

int main(){
  int n; cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int count=0;
  for(int i=0;i<n;i++){
    int c0=0, c1=0;
    for(int j=i;j<n;j++){
      if(a[j]==0) c0++;
      if(a[j]==1) c1++;
      if(c0==c1){
        count=max(count,j-i+1);
      }
    }
  }
  cout<<count;
}

// Efficient Approach
// Change the 0 to -1 and then find the sum of longest subarray whose sum =0
// TC= O(n) SC=O(n)
int main(){
  int n; cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  unordered_map<int,int> s;
  for(int i=0;i<n;i++)
    a[i]=(a[i]==0)?-1:1;
  int mxlen=0,index=-1;
  int pre_sum=0;
  for(int i=0;i<n;i++){
    pre_sum+=a[i];
    if(s.find(pre_sum)!=s.end()) {
      if(mxlen<i-s[pre_sum]){
        mxlen=i-s[pre_sum];
        index=i;
      }
    }
    if(pre_sum==0){
      mxlen=i+1;
      index=i;
    }
    else s[pre_sum]=i;
  }
  cout<<mxlen<<endl;

}