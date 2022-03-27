#include <bits/stdc++.h>
using namespace std;



int minCost( vector<vector<int>> &arr, vector<vector<int>> &dp ){
  int n= arr.size(), m= arr[0].size();
  for(int i=n-1;i>=0;i--){
    for(int j=m-1;j>=0;j--){
      if(i==n-1 && j==m-1) dp[i][j] = arr[i][j];
      else if(i==n-1) dp[i][j] = dp[i][j+1] + arr[i][j];
      else if(j==m-1) dp[i][j] = dp[i+1][j] + arr[i][j];
      else dp[i][j] = min(dp[i+1][j], dp[i][j+1]) + arr[i][j];
    }
  }
  return dp[0][0];
}

int main()
{
  int n;
  int m;

  cin >> n >> m;

  vector<vector<int>> arr(n, vector<int>(m));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }

  vector<vector<int>> dp(n, vector<int>(m));

  cout << minCost( arr, dp);
  return 0;
}