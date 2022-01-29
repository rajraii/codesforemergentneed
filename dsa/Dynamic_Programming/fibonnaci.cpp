// Implement fibonnaci series

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> Dp)
{
  if (n == 1 || n == 0)
    return n;
  if (Dp[n] != -1)
    return Dp[n];
  else
    Dp[n] = n;
  return fib(n - 1, Dp) + fib(n - 2, Dp);
}

int knapsack(int *w, int *val, int W, int n, int **dp)
{
  if (n == 0 || W == 0)
    return 0;
  if (dp[n][W] != -1)
    return dp[n][W];
  if (w[n - 1] > W)
  {
    return dp[n][W] = knapsack(w, val, W, n - 1, dp);
  }
  else
  {
    return dp[n][W] = max(val[n] + knapsack(w, val, W - w[n - 1], n - 1, dp), knapsack(w, val, W, n - 1, dp));
  }
}

int main()
{
  vector<int> Dp(6, -1);
  int val[] = {60, 100, 120};
  int w[] = {10, 20, 30};
  int W = 50;
  int n = 3;
  int **dp;
  dp = new int *[n];

  for (int i = 0; i < n; i++)
    dp[i] = new int[W + 1];
  for(int i=0;i<n;i++)
    for(int j=0;j<W+1;j++)
      dp[i][j]=-1;

  // cout<<fib(5,Dp);
  cout << knapsack(w, val, W, n-1, dp);
}
