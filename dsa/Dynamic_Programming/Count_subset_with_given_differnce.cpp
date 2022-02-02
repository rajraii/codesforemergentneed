//  COunt the number of subset with given difference
#include<iostream>
using namespace std;

int subset(int *a, int n, int sum){
  int dp[n+1][sum+1];
  for(int i=0;i<=n;i++) dp[i][0]=1;
  for(int i=1;i<=sum;i++) dp[0][i]=0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=sum;j++){
      if(a[i-1]>j) dp[i][j]=dp[i-1][j];
      else dp[i][j]=dp[i-1][j] + dp[i-1][j-a[i-1]];
    }
  }
  return dp[n][sum];
}

int count(int *a, int n , int diff){
  int sumA=0;
  for(int i=0;i<n;i++) sumA+=a[i];
  int s1= (diff+sumA)/2;
  return subset(a,n,s1);
}

int main(){
  int n=4,diff=1;
  int a[]={1,1,2,3};
  cout<<count(a,n,diff);
}