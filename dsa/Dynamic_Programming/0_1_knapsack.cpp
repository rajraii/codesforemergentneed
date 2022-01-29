#include<iostream>
using namespace std;

// ! brute force - simple recursion O(2^n) -expo

int knapsack(int w[], int val[], int W, int n){
  if(n==0 || W==0) return 0;
  if(w[n-1]<= W) 
    return max( val[n-1] + knapsack(w,val, W-w[n-1],n-1), knapsack(w,val,W,n-1));
  else return knapsack(w,val,W,n-1);
}


// ! Memoization TC- O(N*W) SC- O(N*W)

int KnapsackRec(int *w, int *val,int W, int n, int **dp){
  if(n==0 || W==0) return 0;
  if(dp[n][W] !=-1) return dp[n][W];
  if(dp[n][W] > W) {
    return dp[n][W]= KnapsackRec(w,val,W,n-1,dp);
  }
  else {
    return dp[n][W] = max( val[n] + KnapsackRec(w,val,W-w[n-1],n-1,dp), KnapsackRec(w,val,W,n-1,dp));
  }
}

int KnapSackMem(int *w, int *val, int W, int n){
  int **dp;
  dp=new int *[n];
  
  for(int i=0;i<n;i++)
    dp[i]=new int [W+1];

  for(int i=0;i<n;i++)
    for(int j=0;j<W+1;j++)
      dp[i][j]=-1;

  
  return KnapsackRec(w,val,W,n-1,dp);
}



// ! Tabulation TC -(N*W) SC- O(N*W)

int knapsackTab(int *w, int *val, int W, int n){
  
  int dp[n+1][W+1];

  for(int i=0; i<n+1; i++){
    for(int j=0; j<W+1; j++){

      if(i==0 || j==0) 
        dp[i][j]=0;
      
      else if(w[i-1]<=j) 
        dp[i][j]= max( val[i-1] + dp[i-1][j-w[i-1]], dp[i-1][j]);
      
      else 
        dp[i][j]=dp[i-1][j]; 
    }
  }
  return dp[n][W];
}


int main(){
  int val[] = { 60, 100, 120 };
  int w[] = { 10, 20, 30 };
  int W = 50;
  int n= 3;
  cout<<knapsack(w,val,W,n)<<endl;
  cout<<KnapSackMem(w,val,W,n)<<endl;
  cout<<knapsackTab(w,val,W,n)<<endl;
}