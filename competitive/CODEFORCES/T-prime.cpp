#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod=100000007;
const int MAX=1000001;
bool prime[MAX];

void sieve(){
  int i,j;
  prime[0]=prime[1]=true;
  for(i=4;i<MAX;i+=2)
    prime[i]=true;
  for(i=3;i<=MAX;i++){
    if(!prime[i]){
      for(j=i+i;j<MAX;j+=2*i)
        prime[j]=true;
    }
  }  
}

int main(){
  int t; cin>>t;
  while(t--){
    ll n; cin>>n;
    ll r= sqrt(n);
    if(!prime[r] && r*r==n)
      cout<<"YES"<<endl;
    else 
      cout<<"NO"<<endl;
  }
}