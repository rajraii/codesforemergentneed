#include <bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int m=1001, d=abs(a[0]-a[n-1]);
int idx1=1, idx2=n;
m=min(m,d);
for(int i=0;i<n-1;i++){
    d=abs(a[i]-a[i+1]);
    if(m>d){
        m=d;
        idx1=i;
        idx2=i+1;
    }
}
cout<<idx1<<" "<<idx2;
return 0;
}