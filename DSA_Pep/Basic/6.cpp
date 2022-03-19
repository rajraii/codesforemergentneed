#include <bits/stdc++.h>
using namespace std;

void solve(string digit, vector<string>&res, int index, string map[], string output){
  if(index>=digit.length()){
    res.push_back(output);
    return;
  }
  
  int num= digit[index]-'0';
  string curr= map[num];

  for(int i=0;i<curr.length();i++){
    output.push_back(curr[i]);
    solve(digit, res, index+1, map, output);
    output.pop_back();
  }
}

vector<string> rec(string digit){
  vector<string> res;
  if(digit.length()==0) return res;
  string output="";
  int index=0;
  string map[] = { "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
  solve(digit, res, index, map, output);
  for(auto i: res) cout<<i<<endl;
}

int main(){
  rec("78");
}