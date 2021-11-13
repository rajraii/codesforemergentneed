#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[]={73,74,75,71,69,72,76,73};
  int n=sizeof(a)/sizeof(a[0]);
  vector<int> res;
  for(int i=0;i<n;i++){
    int count=0;
    int j=i+1;
    while(j<n) {
      if(a[j]>a[i]){
        count=j-i;
        break;
      }
      j++;
    }
    res.push_back(count);
  }
  for(auto i: res) cout<<i<<" ";
return 0;
}