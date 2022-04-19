#include <bits/stdc++.h>
using namespace std;

void rec(vector<vector<int>>&res,vector<int> &curr, vector<int> arr, int i){
  if(i>=arr.size()){
    res.push_back(curr);
    return;
  }
  curr.push_back(arr[i]);
  rec(res,curr, arr, i+1);
  curr.pop_back();
  rec(res, curr, arr, i+1);
}
int main(){
  vector<int> v ={3,1,2};
  vector<vector<int>> res;
  vector<int> curr;
  rec(res,curr, v, 0);
  for(auto i: res){
    for(auto j: i){
      cout<<j<<" ";
    }
    cout<<endl;
  }
return 0;
}