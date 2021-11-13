#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
  int a[]={2,3,5,7};
  int n=4;
  int count=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[j]%a[i]==0 || a[i]%a[j]==0) count++;
    }
  }
  cout<<count<<endl;
}

// Efficiet approach Hashing O(nlogn)

// create a hash table 
// find the maximum
//  find the multiple of element and if there are increment count
// TC n*max/min
int main(){
  int a[]={1,2,3,6,5,7,8};
  int n=7;
  unordered_map<int,int> b;
  int mx=0;
  for(int i=0;i<n;i++) {
    b[a[i]]++;
    if(a[i]>mx) mx=a[i];
  }
  // cout<<mx<<endl;
  int count=0;
  for(int i=0;i<n;i++){
    int j=2;
    int temp=a[i];
    while(temp*j<=mx){
      if(b.find(temp*j)!=b.end()) {
        // j++;
        count++;
      }
      j++;
    }
  }
  cout<<count<<endl;
}