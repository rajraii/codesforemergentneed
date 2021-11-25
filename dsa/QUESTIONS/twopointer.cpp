#include <bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n; 
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int x; cin>>x;
int i=0, j=n-1;
    while(i<j){
        if(a[i]+a[j]==x) cout<<a[i]<<" "<<a[j];
        else if(a[i]+a[j]>x) j--;
        else i++;
    }
return 0;
}