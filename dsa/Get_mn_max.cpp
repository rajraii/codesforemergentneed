#include<iostream>
using namespace std;
int main(){
  int a[]{1,2,3,4,5};
  int n=5;
  int mn=10001, mx=-10001;
  int i=0;
  if(n%2==0){
    if(a[0]>a[1]) {
      mx=a[0];
      mn=a[1];
    }
    else{
      mx=a[1];
      mn=a[0];
    }
    i=2;
  }
  else {
    mn=a[0];
    mx=a[0];
    i=1;
  }
  while(i<n-1){
    if(a[i]>a[i+1]){
      if(a[i]>mx) mx=a[i];
      if(a[i+1]<mn) mn=a[i+1];
    }
    else{
      if(a[i+1]>mx) mx=a[i+1];
      if(a[i]<mn) mn=a[i];
    }
    i+=2;
  }
  cout<<mn<<" "<<mx;
}