#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2){
  if(nums1.size()==0 ) return {nums2};
  if(nums2.size()==0) return {nums1};
  vector<int> a,b;
  {
    unordered_map<int,int> m;
    for(auto i: nums1) m[i]++;
    for(auto i: nums2){
      if(m.find(i)==m.end()){
        b.push_back(i);
      }
    }
  }
  unordered_map<int,int> m;
  for(auto i: nums2) m[i]++;
  for(auto i: nums1){
    if(m.find(i)==m.end()){
      a.push_back(i);
    }
  }
  

  return {a,b};
}

int main(){

  return 0;
}