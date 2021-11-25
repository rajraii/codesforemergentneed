#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m; cin>>n>>m;
int a[m]={0};
a[n-1]=1;
for(int i=n; i<m;i++){
    for(int j=i-n;j<i;j++){
        a[i]+=a[j];
    }
}
for(int i=0;i<m;i++) cout<<a[i]<<" ";
return 0;
}