// return if the array can be partition intwo subset with equal sum

#include<iostream>
#include<vector>
using namespace std;

// ! Naive approach - Recursion TC expo

bool subsetSum(int n, int *arr, int sum){
  if(n==0) return sum==0;
  if(sum==0) return true;
  if(arr[n-1]<=sum) return subsetSum(n-1,arr,sum-arr[n-1]) || subsetSum(n,arr,sum);
  else return subsetSum(n-1,arr,sum);
}

int equalPartition(int n, int *arr){
  if(n==0) return 0;
  int sum=0;
  for(int i=0;i<n;i++) sum+=arr[i];
  if(sum%2) return 0;
  return subsetSum(n,arr,sum/2);
}

//  ! Memoization TC - O(n*2)

// bool subsetSumMem(int n, int *arr, int sum, vector<int> dp){
//   if(n==0) {
//     if(sum==0) dp[]
//   }
//   if(sum==0) return true;
//   if(arr[n-1]<=sum) return subsetSum(n-1,arr,sum-arr[n-1]) || subsetSum(n,arr,sum);
//   else return subsetSum(n-1,arr,sum);
// }


int main(){
  int N = 4;
  int arr[] = {1, 5, 11, 5};
  if(equalPartition(N,arr)) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}





// bool subsetSum(int n, int *arr, int sum){
//   int dp[n+1][sum+1];
//   for(int i=0;i<=n;i++){
//     for(int j=0;j<=sum+1;j++){

//     }
//   }
// }