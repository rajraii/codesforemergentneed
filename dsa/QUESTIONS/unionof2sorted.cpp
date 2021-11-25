#include<iostream>
using namespace std;
void unionarray(int a[],int b[],int m, int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]<b[j]) {cout<<a[i]<<" "; i++;}
        else if(a[i]>b[j]){ cout<<b[j]<<" "; j++;}
        else {cout<<a[i]<<" "; i++; j++;}
    }
    while(i<m) {cout<<a[i]<<" "; i++;}
    while(j<n) {cout<<b[j]<<" "; j++;}
}
int main(){
    int a[]={3,5,8};
    int b[]={2,8,9,10,15};
    int m=3,n=5;
    unionarray(a,b,m,n);
}