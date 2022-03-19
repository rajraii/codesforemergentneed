#include <bits/stdc++.h>
using namespace std;

// void sub(string a,string res=""){
//   if(res.length()==a.length()) {
//     cout<<res<<" ";
//     return;
//   }
//   sub(a.substr(1), res+=a[0]);
//   sub(a.substr(1), res);
// }

int main(){
  string a;
  cin>>a;
  for(int i=0;i<a.length();i++){
    string temp="";
    for(int j=i;j<a.length();j++){
      temp+= a[j];
      cout<<temp<<" ";
    }
  }
return 0;
}