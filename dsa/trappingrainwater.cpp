#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=a[0];
    rmax[n-1]=a[n-1];
    for(int i=1;i<n;i++)
        lmax[i]=max(a[i],lmax[i-1]);
    for(int i=n-2;i>=0;i--)
        rmax[i]=max(a[i],rmax[i+1]);
    for(int i=1;i<n;i++)
        res+=(min(lmax[i],rmax[i])-a[i]);
    cout<<res<<endl;
} 