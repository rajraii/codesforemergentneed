// Count Distinct element in every window
#include<iostream>
#include<unordered_map>
using namespace std;

// Naive Approach o((n-k)*k*k)

// int main(){
//   int a[6]={10,10,5,3,20,5};
//   int n=6,k=4;
//   for(int i=0;i<=n-k;i++){
//     int count=0;
//     for(int j=0;j<k;j++){
//       bool flag=false;
//       for(int p=0;p<j;p++){
//         if(a[i+j]==a[i+p]){
//           flag=true;
//           break;
//         }
//       }
//       if(flag==false) count++;
//     }
//     cout<<count<<endl;
//   }
// }

// Efficient Approach Hashing O(nlogn)

int main(){
  int a[] = {1, 2, 1, 3, 4, 2, 3}; 
  int n=7,k=4;
  unordered_map<int,int> freq;
  int count=0;
  for(int i=0;i<k;i++){
    if(freq[a[i]]==0) count++;
    freq[a[i]]++;
  }
  cout<<count<<endl;
  for(int i=k;i<n;i++){
    if(freq[a[i-k]]==1) count--;  // reduxe the count of last element of last window if count is one remove it
    freq[a[i-k]]--; 
    if(freq[a[i]]==0) count++; // increase count if the element is first occurence
    freq[a[i]]++; 
    cout<<count<<endl;
  }
}