#include<iostream>
using namespace std;
int swap(int &a, int &b){
   int temp=a;
   a=b;
   b=temp;
}
int hoare(int arr  [], int l, int r){
//    int pivot=a[l];
//    int i=l-1, j=r+1;
//    while(true){
//       do{
//          i++;
//       }while(a[i]<pivot);
//       do{
//          j--;
//       }while(a[i] >pivot);
//       if(i>=j) return j;
//       swap(a[i],a[j]);
//    }
// }

    int pivot = arr[l];
    int i = l - 1, j = r + 1;
 
    while (true) {
        // Find leftmost element greater than
        // or equal to pivot
        do {
            i++;
        } while (arr[i] < pivot);
 
        // Find rightmost element smaller than
        // or equal to pivot
        do {
            j--;
        } while (arr[j] > pivot);
 
        // If two pointers met.
        if (i >= j)
            return j;
 
        swap(arr[i], arr[j]);
    }
}
void quickSort(int a[], int l, int r){
   if(l<r){
      int pi=hoare(a,l,r);
      quickSort(a,l,pi);
      quickSort(a,pi+1,r);
   }
}
int main(){
   int a[]={10,24,8,9,5};
   int n=5;
   quickSort(a,0,n-1);
   for(int i:a) cout<<i<<" ";
}