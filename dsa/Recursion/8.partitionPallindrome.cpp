#include <bits/stdc++.h>
using namespace std;

bool isPallindrome(int start, int end, string s){
  if(start==end) return true;
  while(start<=end){
    if(s[start]!=s[end]) return false;
    start++;
    end--;
  }
  return true;
}

void solve(int idx, string s, vector<string> &curr, vector<vector<string>> &res){
  if(idx==s.length()){
    res.push_back(curr);
    return;
  }
  for(int i=idx; i<s.length();i++){
    if(isPallindrome(idx, i, s)){
      curr.push_back(s.substr(idx, i-idx+1));
      solve(i+1,s,curr,res);
      curr.pop_back();
    }
  }
}
vector<vector<string>> func(string s){
  // solve();
}

int main(){

return 0;
}