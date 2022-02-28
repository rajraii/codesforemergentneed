// activity selection problem
// we have selected the activity according to their finis time


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector<pair<int,int>> v,res;
  for(int i=0;i<4;i++){
    int a, b;
    cin>> a>>b;
    v.push_back({a,b});
  }
  sort(v.begin(), v.end());
  res.push_back({v[0].first, v[0].second});
  for(int i=1;i<4;i++){
    if( (v[i].first> res[i-1].first && v[i].first < res[i-1].second)
      || (v[i].second> res[i-1].first && v[i].second> res[i-1].second)
    )
    continue;
    else res.push_back({v[i].first, v[i].second});
  }

  for(int i=0;i<res.size();i++)
    cout<<res[i].first<<" "<<res[i].second<<endl;
}