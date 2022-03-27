#include <bits/stdc++.h>
using namespace std;

 int rec(int n, int mem[]){
  if(n==0 || n==1 ) return n;
  if(mem[n]!=0) return mem[n];
  return mem[n] = rec(n-1, mem) + rec(n-2,mem);
}

int main(){
  int n; cin>>n;
  int a[n+1];
  for(int i=0;i<=n;i++) a[i]=0;
  cout<<rec(n,a);
return 0;
}

