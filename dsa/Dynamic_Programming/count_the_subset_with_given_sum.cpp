//  count the number of subset with sum eqaul to given sum

#include<iostream>
using namespace std;

int count(int *a, int n, int sum){
  int dp[n+1][sum+1];
  for(int i=0;i<=n;i++) dp[i][0]=1;
  for(int i=1;i<=sum;i++) dp[0][i]=0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=sum;j++){
      if(a[i-1]>j) dp[i][j]=dp[i-1][j];
      else dp[i][j]=dp[i-1][j] + dp[i-1][j-a[i-1]];
    }
  }
  return dp[n][sum];
}