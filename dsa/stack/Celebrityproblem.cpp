// find the person who doesnt know anyone but everyone know him

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// !Naive approach O(n2)

int cele(vector<vector<int>> &M, int n)
{
  int in[n] = {0};
  int out[n] = {0};
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (M[i][j] == 1)
      {
        in[j]++;
        out[i]++;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (in[i] == n - 1 && out[i] == 0)
    {
      return i;
    }
  }
  return -1;
}


// ! Efficient Approach - STack TC 0(n) 

int celeb(vector<vector<int>> &M, int n)
{
  stack<int> s;
  for (int i = 0; i < n; i++) s.push(i);
  while(s.size()>1){
    int a= s.top(); s.pop();
    int b= s.top(); s.pop();
    if(M[a][b]) s.push(b);
    else s.push(a);
  }
  int pot= s.top();
  for(int i=0;i<n;i++){
    if(pot==i) continue;
    if(M[pot][i]==1) return -1;
    if(!M[i][pot]==1) return -1;
  }
  return pot;
}