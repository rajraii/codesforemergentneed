// Same as count subset with given diff

#include<iostream>
using namespace std;

int subset(int a[], int n, int target){
  int range= 0;
  for(int i=0;i<n;i++) range+=a[i];
  int s1=(range+target) /2;
  if(range<target || (target+range) %2 != 0) return 0;
  int dp[n+1][s1+1];
  for(int i=0;i<=n;i++) dp[i][0]= 1;
  for(int i=1;i<=s1;i++) dp[0][i]= 0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=s1;j++){
      if(a[i-1]>j) dp[i][j]=dp[i-1][j];
      else dp[i][j]=dp[i-1][j] + dp[i-1][j-a[i-1]];
    }
  }
  return dp[n][s1];
}