#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod=100000007;
const int MAX=1000001;
bool prime[MAX];

void sieve(){
  for(int i=2; i*i<=MAX;i++){
    if(prime[i]==true){
      for(int j=i*i;j<=MAX;j+=i)
        prime[j]=false;
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