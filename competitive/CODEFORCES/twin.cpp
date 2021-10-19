
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n; cin>>n;
  int a[n];
  int sum=0;
  for(int i=0;i<n;i++) {
    cin>>a[i];
    sum+=a[i];
  }
  sort(a,a+n);
  sum=sum/2;
  int count=0,sum2=0;
  for(int i=n-1;i>=0;i--){
    sum2+=a[i];
    count++;
    if(sum2>sum) break;
  }
  cout<<count<<endl;
}