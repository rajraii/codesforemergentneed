// activity 2

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool mycmp(pair<int,int> a, pair<int,int> b){
  return (a.second<b.second);
}

int maxActivity(pair<int,int> arr[], int n){
  sort(arr, arr+n, mycmp);
  int prev=0;
  int res=1;
  for(int curr=1; curr<n; curr++){
    if(arr[curr].first >= arr[curr].second){
      res++;
      prev= curr;
    }
  }
  return res;
}

int main(){
  pair<int, int> a[] = {{12,25}, {10,20}, {20,30}};
  int n=3;
  cout<<maxActivity(a, n);
}