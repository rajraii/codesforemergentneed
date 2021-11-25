#include<iostream>
using namespace std;
void countSort(int a[], int n){
    int k=a[0];
    for(int i=1;i<n;i++) k=max(k,a[i]);
    int count[k];
    for(int i=0;i<=k;i++) count[i]=0; 
    for(int i=0;i<n;i++) count[a[i]]++;
    for(int i=1;i<=k;i++) count[i] += count[i-1];
    int output[n+1];
    for(int i=n-1;i>=0;i--){
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    for(int i=0;i<n;i++) a[i]=output[i];
}
void print(int a[], int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    countSort(a,n);
    print(a,n);
}