#include <bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n; int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int res=0;
int curr=0;
for(int i=0;i<n;i++){
    // int curr=0;
    // for(int j=i;j<n;j++){
    //     if(a[j]==1) curr++;
    //     else break;
    // }
    // res= max(curr,res);
    
    if(a[i]==0) curr=0;
    else {
        curr++;
        res=max(curr, res);
   }
}
cout<<res;
return 0;
}