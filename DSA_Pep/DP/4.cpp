#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  cin>>n>>m;
  int v[n][m];
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
      cin>> v[i][j];
  }
  
  
  int tab[n][m];
  
  for(int j=m-1;j>=0;j--){
    for(int i=n-1;i>=0;i--){
      if(j==m-1){
        tab[i][j]= v[i][j];
      }
      else if(i==0){
        tab[i][j] = v[i][j] + max( tab[i][j+1], tab[i+1][j+1]); 
      }
      else if(i==n-1){
        tab[i][j] = v[i][j]+ max(tab[i][j+1], tab[i-1][j+1]);
      }
      else {
        tab[i][j] = v[i][j]+ max(tab[i][j+1], max(tab[i+1][j+1], tab[i-1][j+1]));
      }
    }
  }

  int ans=tab[0][0];
  for(int i=0;i<n;i++){
    if(tab[i][0] > ans) ans= tab[i][0];
  }
  cout<<ans<<endl;
return 0;
}