#include <bits/stdc++.h>
using namespace std;

void rec(string a, string res){
  if(a.length()==0) {
    cout<<res<<endl;
    return;
  }
  rec(a.substr(1),res+a[0]);
  rec(a.substr(1),res);
}

int main(){
  rec("abc","");
return 0;
}