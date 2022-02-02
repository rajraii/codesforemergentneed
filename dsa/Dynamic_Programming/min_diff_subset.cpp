// Minimum subset sum difference

#include<iostream>
#include<vector>
using namespace std;
class solution{
  public:
  vector<int> v;
  void subset(int arr[], int n , int sum){
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++) dp[i][0]=true;
        for(int i=1;i<=sum;i++) dp[0][i]=false;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]>j) dp[i][j]=dp[i-1][j];
                else dp[i][j]= dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
        }
        for(int i=0;i<=sum/2;i++){
            if(dp[n][i]==true) v.push_back(i);
        }
    }
	int minDifference(int arr[], int n)  { 
	    int range=0;
	    for(int i=0;i<n;i++) range+=arr[i];
	    subset(arr,n,range);
	    int a=v[v.size()-1];
	    return range-2*a;
	} 
};

int main(){
  int n=2;
  int a[]={1,4};
  solution s;
  cout<<s.minDifference(a,n);
}