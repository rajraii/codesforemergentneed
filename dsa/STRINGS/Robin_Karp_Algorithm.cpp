#include <bits/stdc++.h>
using namespace std;
#define d 256

void search(string a, string b, int q)
{
  int n = a.length();
  int m = b.length();
  int i, j;
  int h = 1;
  int t = 0, p = 0;

  for (i = 0; i < m - 1; i++)
    h = (h * d) % q;

  for (i = 0; i < m; i++)
  {
    t = (t * d + a[i]) % q;
    p = (p * d + b[i]) % q;
  }

  for (i = 0; i <= n - m; i++)
  {
    if (p == t)
    {
      for (j = 0; j < m; j++)
      {
        if (b[j] != a[i + j])
          break;
      }
      if (j == m)
        cout << "pattern found at index " << i << endl;
    }
    if (i < n - m)
    {
      t = ((d * (t - a[i] * h)) + a[i + m]) % q;
      if (t < 0)
        t = (t + q);
    }
  }
}

int main()
{
  string a;
  string b;
  cin>>a>>b;
  int q = 101;
  search(a, b, q);
}
