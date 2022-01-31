// Print if a subset is present with the value equal to target

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// ! Naive approach Recursion 

bool subsetSum(int n, int *a, int sum){
  if(n==0) return false;
  if(sum==0) return true;

  if(a[n-1]>sum) return subsetSum(n-1,a,sum);
  else return subsetSum(n-1,a,sum) || subsetSum(n-1,a,sum-a[n-1]);
}

// ! Memoization 

int dp[2000][2000];

bool subsetSumMem(int n, int*a, int sum){
  if(n==0) return false;
  if(sum==0) return true;
  if (a[n-1]>sum) return dp[n-1][sum]=subsetSumMem(n-1,a,sum);
  else return dp[n-1][sum]=subsetSumMem(n-1,a,sum-a[n-1]) || subsetSumMem(n-1,a,sum);
}

// ! Tabulation

bool subsetSumTab(int n, int *a, int sum){
  bool dp[n+1][sum+1];
  for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){
      if(i==0) dp[i][j]=false;
      if(j==0) dp[i][j]=true;
      if(i==0 && j==0) dp[i][j]=true; 
    }
  }
  for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){
      if(a[i-1]>j) dp[i][j]=dp[i-1][j];
      else dp[i][j]= dp[i-1][j] || dp[i-1][j - a[i-1]];
    }
  }
  return dp[n][sum];
}


int main(){
  int n = 5;
  int a[] = {1, 5, 3, 7, 4};
  int sum = 12;
  memset(dp,-1,sizeof(dp));
  if(subsetSum(n,a,sum)) cout<<"1"<<endl;
  else cout<<"0"<<endl;
  if(subsetSumMem(n,a,sum)) cout<<"1"<<endl;
  else cout<<"0"<<endl;
  if(subsetSumTab(n,a,sum)) cout<<"1"<<endl;
  else cout<<"0"<<endl;
}


