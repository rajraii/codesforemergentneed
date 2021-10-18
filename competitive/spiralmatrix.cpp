#include<iostream>
using namespace std;
void print( int **a,int n){
  int top=0, left=0,right=n-1,bottom=n-1;
  while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++)  
      cout<<a[top][i];
    top++;
    for(int i=top;i<=bottom;i++)
      cout<<a[i][right];
    right--;
    if(top<=right){
      for(int i=right;i>=left;i--)
        cout<<a[bottom][i];
      bottom--;
    }
    if(left<=right){
      for(int i=bottom;i>=top;i--)
        cout<<a[i][left];
      left++;
    }
  }
}
int main(){
  int n; cin>>n;
  int **a=new int*[n];
  for(int i=0;i<n;i++){
    a[i]=new int[n];
    for(int j=0;j<n;j++) cin>>a[i][j];
  }
  print(a,n);
} 