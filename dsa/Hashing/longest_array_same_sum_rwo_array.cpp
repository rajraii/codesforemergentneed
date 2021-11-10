// find the longest span with same sum in two array

#include<iostream>
#include<unordered_map>
using namespace std;

// Naive Approach with O(n^2)

int main(){
  int a[]={0,1,0,0,0,0};
  int b[]={1,0,1,0,0,1};
  int n=6;
  int res=0;
  for(int i=0;i<n;i++){
    int sum1=0,sum2=0;
    for(int j=i;j<n;j++){
      sum1+=a[j];
      sum2+=b[j];
      if(sum1==sum2)
        res=max(res,j-i+1);
    }
  }
  cout<<res<<endl;
}

// Efficient approach tc O(n) sc o(n)

// a1-a2
// find sum with 0