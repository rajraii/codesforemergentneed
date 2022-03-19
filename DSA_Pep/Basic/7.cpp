#include <bits/stdc++.h>
using namespace std;

void rec(int r, int c, int n, int m, string res=""){
  if(r==n && c==m){
    cout<<res<<endl;
    return;
  }
  for(int ms=1; ms<=m-c;ms++){
    rec(r,c+ms,n,m, res+"h"+to_string(ms));
  }
  for(int ms=1; ms<=n-r;ms++){
    rec(r+ms,c,n,m, res+"v"+to_string(ms));
  }
  for(int ms=1; ms<=n-r && ms<=m-c;ms++){
    rec(r+ms,c+ms,n,m, res+"d"+to_string(ms));
  }
}

int main(){
  // rec(3, "");
  rec(1,1,3,3);
}