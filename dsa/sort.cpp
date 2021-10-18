#include <bits/stdc++.h>
using namespace std;
void printarray(int a[],int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]) swap(arr[j],arr[i]);
        }
    }
    printarray(arr,n);
}
void bubbleSort(int arr[], int n){
    int count=1;
    while(count<n){
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]) swap(arr[i+1],arr[i]);
        }
        count++;
    }
    printarray(arr,n);   
}
void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {      
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}

int main(){
int n; cin>>n;
int arr[n];
cout<<"Raj Rai- 208"<<endl;
for(int i=0;i<n;i++) cin>>arr[i];
int type; cin>>type;
if (type==1) selectionSort(arr,n);
else if(type=2) bubbleSort(arr,n);
else if(type==3){
    mergeSort(arr,0,n-1);
    printarray(arr,n);
}
return 0;
}