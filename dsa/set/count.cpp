#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
  int n; cin>>n;
  int arr[n];
  unordered_map<int,int>m;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    m[arr[i]]++;
  }
  for(int i=0;i<n;i++){
    cout<<m[arr[i]];
  }
}