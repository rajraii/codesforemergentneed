#include<iostream>
using namespace std;
int main(){
  int n; cin>>n;
  int arr[12]={4,7,47,74,44,77,444,447,477,777,744,774};
  bool check=false;
  for(int i=0;i<12;i++){
    if(n%arr[i]==0) check=true; 
  }
  if(check) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}