#include<iostream>
using namespace std;
void partition(int a[],int l,int h,int p){
    int temp[h-l+1], index=0;
    for(int i=l;i<=h;i++)
        if(a[i]<=a[p]) temp[index++]=a[i];
    for(int i=l;i<=h;i++)
        if(a[i]>=a[p]) temp[index++]=a[i];
    for(int i=l;i<=h;i++)
        a[i]=temp[i-l];
}
int main(){
    int n=6;
    int a[n]={5,13,6,9,12,11,8};
    partition(a,0,6,6);
    for(int i : a) cout<<i<<" ";
} 