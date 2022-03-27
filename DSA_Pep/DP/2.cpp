#include <bits/stdc++.h>
using namespace std;

int rec(int n, vector<int> &arr){
  if(n==0) return 0;
  vector<int> dp(n+1);
  dp[n]=0;
  for(int i=n-1;i>=0;i--){
    int mini=30;
    for(int j=1;j<=arr[i] && i+j < n; j++){
      int val = dp[i+j] +1;
      dp[i]= min(mini, val);
    }
  }
  return dp[0] ? dp[0] : NULL;
}

int main(){
  int n; cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  cout<<rec(10,a);
return 0;
}