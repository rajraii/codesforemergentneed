#include<iostream>
#include<cstdlib>

using namespace std;

void swap(int &a, int &b) {
   int temp;
   temp = a;
   a = b;
   b = temp;
}

int Partition(int a[], int l, int h) {
   int pivot=a[h];
   int i = l-1;
   for(int j=l; j<=h-1; j++) {
      if(a[j]<pivot) {
         i++;
         swap(a[i], a[j]);
      }
   }
   swap(a[i+1],a[h]);
   return i+1;
}
void QuickSort(int a[], int l, int h) {
   if(l < h) {
      int p = Partition(a, l, h);
      QuickSort(a, l, p-1);
      QuickSort(a, p+1, h);
   }
}
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0; i < n; i++) {
      cin>>arr[i];
   }
   QuickSort(arr, 0, n-1);
   for (int i = 0; i < n; i++){
      cout<<arr[i]<<" ";
   }
   return 0;
}