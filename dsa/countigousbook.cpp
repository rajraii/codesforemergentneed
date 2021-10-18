#include<iostream>
using namespace std;
bool isFeasible(int a[], int n, int k, int ans){
    int req=1, sum=0;
    for(int i=0;i<n;i++){
        if(sum+a[i]>ans){
            req++;
            sum=a[i];
        }
        else sum+=a[i];
    }
    return (req<=k);
}
int minPages(int a[], int n, int k){
    int sum=0, mx=0;
    for(int i=0;i<n; i++) {
        sum+=a[i];
        mx= max(mx, a[i]);
    }
    int low= mx, high= sum, res=0;
    while(low<=high){
        int mid= (low+high)/2;
        if(isFeasible(a,n,k,mid)){
            res=mid;
            high=mid-1;
        }
        else low=mid+1;
    } 
    return res;
}
int main(){
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<minPages(a,n,k);
    return 0;
}