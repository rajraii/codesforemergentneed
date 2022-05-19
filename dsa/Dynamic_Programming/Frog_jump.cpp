#include <bits/stdc++.h>
using namespace std;

vector<int>dp(4,-1);

int frogJump(int ind, int arr[], int n){
  if(ind<=0) return 0;
  if(dp[ind]!=-1) return dp[ind];
  int left = abs(arr[ind]-arr[ind-1]) + frogJump(ind-1, arr, n);
  int right= abs(arr[ind]-arr[ind-2]) + frogJump(ind-2, arr, n);
  return dp[ind]=min(left, right);
}

int main(){
  int n=4;
  memset(0,4,-1);
  int arr[n]={10,20,30,10};
  cout<<frogJump(n-1,arr,n);
return 0;
}