#include <bits/stdc++.h>
using namespace std;

int dp[100][100];

bool check(int a[], int n, int target)
{
  if (target == 0)
    return true;
  if (n == 0)
    return false;
  if (dp[n - 1][target] != -1)
    return dp[n - 1][target];
  if (a[n - 1] > target)
    return dp[n - 1][target] = check(a, n - 1, target);
  else
    return dp[n - 1][target] = check(a, n - 1, target) || check(a, n - 1, target - a[n - 1]);
}

int main()
{
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  int tar;
  cin >> tar;
  // memset(dp, -1, sizeof(dp));

  bool tab[n + 1][tar + 1];

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= tar; j++)
    {
      if (i == 0 && j == 0)
      {
        tab[i][j] = true;
      }
      else if (i == 0)
      {
        dp[i][j] = false;
      }
      else if (j == 0)
      {
        dp[i][j] = true;
      }
      else
      {
        if (j < a[i - 1])
        {
          tab[i][j] = tab[i - 1][j];
        }
        else
        {
          tab[i][j] = tab[i - 1][j] || tab[i - 1][j - a[i - 1]];
        }
      }
    }
  }

  cout<<tab[n][tar];
  return 0;
}
