//maximum type of element

// count distinct element= d;
// if d>n/k return n/k;
// else return d;

#include <iostream>
#include <unordered_set>
using namespace std;
int max_Distinct(int a[], int n, int k)
{
  unordered_set<int> s;
  for (int i = 0; i < n; i++)
    s.insert(a[i]);
  int d= s.size();
  if(d>=(n/k)) return (n/k);
  else d;
}
int main(){
  int n=8;
  int a[n]={1,1,2,3,1,5,1,2};
  int k=2;
  cout<<max_Distinct(a,n,k);
}