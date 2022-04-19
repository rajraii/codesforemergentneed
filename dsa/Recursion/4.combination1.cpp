#include <bits/stdc++.h>
using namespace std;

void rec(vector<vector<int>> res, vector<int> curr, vector<int>a, int i, int target){
  if(i==a.size()){
    if(target==0){
      res.push_back(curr);
    }
    return;
  }
  if(a[i]<=target){
    curr.push_back(a[i]);
    rec(res,curr,a,i+1, target-a[i]);
    curr.pop_back();
  }
  rec(res,curr,a,i++, target);
}

int main(){
  vector<int> arr = {1,2,3,4,5};
  int target=7;
  vector<vector<int>> res;
  rec(res,{},arr,0,target);
  
return 0;
}