#include<iostream>
using namespace std;
int partition(int a[], int l, int r){
    int p=a[l];
    int i=l-1,j=r+1;
    while(1){
        while(a[i]<p) {i++;}
        while(a[j]>p) {j--;}
        if(i>=j) return j;
        swap(a[i],a[j]);
    }
}
void sort(int a[], int l,int r){
    if(l<r){
        int p=partition(a,l,r);
        sort(a,l,p);
        sort(a,p+1,r);
    }
}
int main(){
    int a[]={3,1,2,5,4};
    int n=5;
    sort(a,0,n-1);
    for(int i:a) cout<<i<<" ";
}