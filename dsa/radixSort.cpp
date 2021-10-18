#include<iostream>
using namespace std;
int getMax(int a[], int n){
    int mx=a[0];
    for(int i=1;i<n;i++)
        if(a[i]>mx)
            mx=a[i];
    return mx;
}
void countSort(int a[], int n, int exp){
    int count[10];
    int output[n];
    for(int i=0;i<10;i++) 
        count[i]=0;
    for(int i=0;i<n;i++)
        count[(a[i]/exp)%10]++;
    for(int i=1;i<10;i++)
        count[i]+=count[i-1];
    for(int i=n-1;i>=0;i--){
        output[count[(a[i]/exp)%10]-1]=a[i];
        count[(a[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++)
        a[i]=output[i];
}
void radixSort(int a[], int n){
    int m= getMax(a,n);
    for(int exp=1; m/exp >0; exp= exp*10)
        countSort(a,n,exp);
}
void print(int a[], int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    radixSort(a,n);
    print(a,n);
    return 0;
}