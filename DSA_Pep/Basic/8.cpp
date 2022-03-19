#include <bits/stdc++.h>
using namespace std;

void solve(string a, vector<string> &res, int index, string output){
  if(index==a.length()){
    res.push_back(output);
    return;
  }
  int num = a[index] - '0';
  char curr= num-1 + 'a';
  output.push_back(curr);
  solve(a,res,index+1,output);
  output.pop_back();
}

void rec(string a){
  if(a.size()==0) return;
  int index=0;
  string output="";
  vector<string> res; 
  solve(a, res, index, output);
  for(auto i: res) cout<<i<<endl;
}

int main(){
  // rec(3, "");q
  // rec("abc",0);
  
  string a= "abcd";
  string b=a.substr(0,2);
  cout<<b;
  // rec("123");
  
}