#include<iostream>
using namespace std;
void reverse(int a[], int low, int high){
    while(low<high){
        swap(a[low], a[high]);
        low++;
        high--;
    } 
}
void rotate(int a[], int n, int d){
    if(d==0) return;
    d=d%n;
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int d; cin>>d;
    rotate(a,n,d);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
