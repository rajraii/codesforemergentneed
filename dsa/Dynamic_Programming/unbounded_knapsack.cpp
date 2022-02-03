//  knapsack with no limitation on how many weights we can put

#include<iostream>
using namespace std;


int unbounded_knapsack(int n,int W,int *wt, int *val){
  int dp[n+1][W+1];
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      if(i==0 || j==0) dp[i][j]=0;
      else if (wt[i-1]>j) dp[i][j] = max(val[i-1]+dp[i][j-wt[i-1]], dp[i-1][j]);
      else dp[i][j]=dp[i-1][j];
    }
  }
  return dp[n][W];
}