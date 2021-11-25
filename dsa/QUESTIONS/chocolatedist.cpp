#include<iostream>
#include<algorithm>
using namespace std;
int minDiff(int *a, int n, int m){
    if(m>n) return -1;
    sort(a,a+n);
    int res=a[m-1]-a[0];
    for(int i=1;i+m-1<n;i++)
        res=min(res, (a[i+m-1]-a[i]));
    return res;
}
int main(){
    int n,m; cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<minDiff(a,n,m);
}