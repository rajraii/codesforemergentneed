#include <bits/stdc++.h>
using namespace std;

void cell(string s){
  char a=s[0], b= s[3];
  int x=s[1]-'0' , y= s[4]-'0';
  vector<string> res;
  // cout<<a<<" "<<b<<" "<<x<<" "<<y;
  for(char i=a;i<=b;i++){
    for(int j=x;j<=y;j++){
      string temp;
      temp+=i;
      temp+=to_string(j);
      res.push_back(temp);
    }
  }
  for(auto i: res) cout<<i<<" ";
}

int main(){
  string s;
  cin>>s ;
  cell(s);

return 0;
}