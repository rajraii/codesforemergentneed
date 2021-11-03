#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n; cin>>n;
  int a[n];
  for(int i=0;i<n; i++) cin>>a[i];
  int st=-1,en=n;
  bool flag= true;
  for(int i=1;i<n;i++){
    if(flag){
      if(a[i]<a[i-1]){
        flag=false;
        st=i-1;
      }
    }
    else {
      if(a[i]>a[i-1]){
        en=i;
        break;
      }
    }
  }
  if(st!=-1){
    bool flag=true;
    reverse(a+st,a+en);
    for(int i=1;i<n;i++){
      if(a[i]<a[i-1]) flag=false;
    }
  }
  if(flag){
    cout<<"YES"<<endl;
    if(st==-1)
      cout<<"1 1"<<endl;
    else 
      cout<<st+1<<" "<<en<<endl;
  }
  else 
    cout<<"NO"<<endl;
}