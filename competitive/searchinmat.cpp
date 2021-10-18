#include<iostream>
using namespace std;
int main(){
  int n; cin>>n;
  int **a=new int*[n];
  for(int i=0;i<n;i++){
    a[i]=new int[n];
    for(int j=0;j<n;j++) cin>>a[i][j];
  }
  int x; cin>>x;
  int i=0,j=n-1;
  while(i<n && j>=0){
    if(a[i][j]==x) {
      cout<<i<<" "<<j;
      break;
    }
    else if(a[i][j]>x) j--;
    else i++;
  }
}