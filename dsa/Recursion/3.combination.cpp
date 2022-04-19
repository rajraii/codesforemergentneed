#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &ans, vector<int> &curr, vector<int> &arr, int ind, int target){
  if (target == 0){
    ans.push_back(curr);
    return;
  }
  for (int i = ind; i < arr.size(); i++){
    if (i > ind && arr[i] == arr[i - 1])
      continue;
    if (arr[i] > target)
      break;
    curr.push_back(arr[i]);
    solve(ans, curr, arr, i+1, target - arr[i]);
    curr.pop_back();
  }
}
void combinationSum2(vector<int> &candidates, int target){
  vector<vector<int>> ans;
  if (candidates.size() == 0)
    return ;
  sort(candidates.begin(), candidates.end());
  vector<int> curr;
  solve(ans, curr, candidates, 0, target);
  for(auto i:ans){
    for(auto j: i){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  return;
}

int main(){
  vector<int> v={10,1,2,7,6,1,5};
  combinationSum2(v, 8);
  return 0;
}