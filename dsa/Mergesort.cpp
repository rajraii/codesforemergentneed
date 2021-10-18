#include <iostream>
using namespace std;
void merge(int a[],int l,int mid,int r){
  int n1=mid-l+1, n2=r-mid;
  int left[n1], right[n2];
  for(int i=0;i<n1;i++) left[i]=a[l+i];
  for(int i=0;i<n2;i++) right[i]=a[mid+1+i];
  int i(0),j(0),k=l;
  while(i<n1 && j<n2){
    if(left[i]<right[j]) {a[k]=left[i]; i++; k++;}
    else {a[k]=right[j]; j++; k++;}
  }
  while(i<n1) {a[k]=left[i]; i++; k++;}
  while(j<n2) {a[k]=right[j]; j++; k++;}
}
void mergeSort(int a[], int l, int r){
  if(l<r){
    int mid=l+(r-l)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);
    merge(a,l,mid,r);
  }
}
int main(){
  int a[]={-1,0,3,57,89,9};
  int n=6;
  mergeSort(a,0,n-1);
  for(int i:a) cout<<i<<" ";
  return 0;
}