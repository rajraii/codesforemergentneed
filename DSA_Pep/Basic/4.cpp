#include <bits/stdc++.h>
using namespace std;


void rec(string a, string ans){
  if(a.length()==0) {
    cout<<ans<<endl;
    return;
  }
  rec(a.substr(1), ans);
  rec(a.substr(1), ans+=a[0]);
}

int main(){
  string a= "abc";
  rec(a,"");
  return 0;
}



