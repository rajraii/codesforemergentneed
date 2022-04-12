#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v= {2,3,5,6};
  int target= 7;

  vector<int>dp(target+1);
  dp[0]=1;
  for( int i=0;i<v.size();i++){
    for(int j=v[i]; j<dp.size();j++){
      if(j>=v[i])
        dp[j] += dp[j-v[i]];
    }
  }
  cout<<dp[target];
return 0;
}

