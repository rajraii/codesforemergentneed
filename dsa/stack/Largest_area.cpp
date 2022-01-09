// find the largest area in histogram

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// ! Naive solution TCO(n2)

void find(int a[], int n)
{
  int res = -1;
  for (int i = 0; i < n; i++)
  {
    int left = i, right = i;
    while (a[left] >= a[i] && left >= 0)
      left--;
    while (a[right] >= a[i] && right < n)
      right++;
    int ans = (right - left - 1) * a[i]; // find the length(left-right-1) and multiply with breadth(a[i])
    res = max(res, ans);
  }
  cout << res << endl;
}

// ! Effcient approach TC O(n)
// You have to find prev smaller element for every element
// find next smaller and prev smaller for every element
// ns[i]-ps[i]-1 * a[i]
// res=max(res,curr)

void findE(int a[], int n)
{
  vector<int> ps(n, -1);
  vector<int> ns(n, n);
  stack<int> s;
  s.push(-1);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && s.top() != -1 && a[s.top()] >= a[i])
    {
      ns[s.top()] = i;
      s.pop();
    }
    if (i > 0 && a[i] == a[i - 1])
      ps[i] = ps[i - 1];
    else
      ps[i] = s.top();
    s.push(i);
  }

  int res = a[0];
  for (int i = 0; i < n; i++)
  {
    int curr = (ns[i] - ps[i] - 1) * a[i];
    res = max(res, curr);
  }
  cout << res << endl;
}

// ! different approach

void findj(int a[], int n)
{
  stack<int> s;
  int maxA = 0;
  for(int i=0;i<=n;i++){
    while( !s.empty() && (i==n || a[s.top()] >= a[i])){
      int height = a[s.top()];
      s.pop();
      int width= s.empty() ? i : i-s.top()-1;
      maxA= max(maxA, height*width); 
    }
    s.push(i);
  }
  cout<<maxA;
}
int main()
{
  int a[] = {6, 2, 5, 4, 1, 5, 6};
  int n = 7;
  findE(a, n);
  findj(a,n);
}