// Given a rod of length N inches and an array of prices, price[] that contains prices of all pieces of size smaller than N. Determine the maximum value obtainable by cutting up the rod and selling the pieces.

#include<iostream>
using namespace std;

int max(int a, int b){
  return a > b ? a : b;
}

int count(int price[], int n){
  int len[n];
  for(int i=0;i<n;i++) len[i]=i+1;
  int dp[n+1][n+1];
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      if(i==0 || j==0) dp[i][j]=0;
      else if(len[i-1]>j) dp[i][j]=dp[i-1][j];
      else dp[i][j] = max( price[i-1]+dp[i][j-1], dp[i-1][j]);
    }
  }
  return dp[n][n];
}