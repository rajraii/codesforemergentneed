#include <bits/stdc++.h>
using namespace std;

void rec(int arr[], int n,int i, int target, string res, int sum){
  if(i==n){
    if(sum==target)
      cout<<res<<endl;
    return;
  }
  rec(arr, n, i+1,target,res+to_string(arr[i]),sum+arr[i]);
  rec(arr, n, i+1,target,res,sum);
}

int main(){
  int arr[]={10,20,30,40,50};
  int target=60;
  rec(arr, 5,0, target,"", 0);
return 0;
}