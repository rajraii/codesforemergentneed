#include <bits/stdc++.h>
using namespace std;
int bin(int a[],int x, int start, int end){
    if(start>end) return -1;
        int mid=(start+end)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]>x) return bin(a,x,start,mid-1);
        else if(a[mid]<x) return bin(a,x,mid+1,end);
}
int main(){
int n,x; cin>>n>>x; 
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n);
cout<<bin(a,x,0,n-1);
return 0;
}