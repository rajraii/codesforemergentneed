// Pattern searching is an important problem in computer science. When we do search for a string in notepad/word file or browser or database, pattern searching algorithms are used to show the search results.
// We have discussed Naive pattern searching algorithm in the previous post. The worst case complexity of the Naive algorithm is O(m(n-m+1)). The time complexity of KMP algorithm is O(n) in the worst case.

#include <bits/stdc++.h>
using namespace std;

void fillLps(string a, int lps[], int m)
{
  lps[0] = 0;
  int i = 1, len = 0;
  while (i < m)
  {
    if (a[i] == a[len])
    {
      len++;
      lps[i] = len;
      i++;
    }
    else
    {
      if (len == 0)
      {
        lps[i] = 0;
        i++;
      }
      else
      {
        len = lps[len - 1];
      }
    }
  }
}

void kmp(string a, string b)
{
  int n = a.length();
  int m = b.length();
  int lps[m];
  fillLps(b, lps, m);
  int i = 0, j = 0;
  while (i < n)
  {
    if (b[j] == a[i])
    {
      i++;
      j++;
    }
    if (j == m)
    {
      cout << "pattern found at index: " << i - j << endl;
      j = lps[j - 1];
    }
    else if (i < n && b[j] != a[i])
    {
      if (j == 0)
        i++;
      else
        j = lps[j - 1];
    }
  }
}

int main()
{
  string a,b; cin>>a>>b;
  kmp(a,b);
}