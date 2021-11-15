// Longest subarray with sum divisible by k
// Difficulty Level : Hard
// Last Updated : 08 Oct, 2021
// Given an arr[] containing n integers and a positive integer k. The problem is to find the length of the longest subarray with sum of the elements divisible by the given value k.
#include <iostream>
using namespace std;
int main()
{
  int a[] = {2, 7, 6, 1, 4, 5};
  int k = 3, n = 6;
  int mxlen = 0;
  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    int len = 0;
    for (int j = i; j < n; j++)
    {
      len++;
      sum += a[j];
      if (sum % k == 0 && len > mxlen)
        mxlen = len;
    }
  }
  cout << mxlen;
}