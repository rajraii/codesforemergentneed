// longest consecutive subsequence 

#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;

// Naive approach - Sorting with O(nlogn)
// int main(){
//   int n=5;
//   int a[n]={1,9,3,4,2};
//   sort(a,a+n);
//   int curr=1,res=1;
//   for(int i=1;i<n;i++){
//     if(a[i]==a[i-1]+1) curr++;
//     else{
//       res=max(res,curr);
//       curr=1;
//     }
//   }
//   res=max(curr,res); // if all are contiguous element
//   cout<<res;
// }

// Efficient approach- hash table with O(n)

int main(){
  int n=5;
  int a[n]={1,9,3,4,2};
  int res=1;
  unordered_set<int> s;
  for(int i=0;i<n;i++)
    s.insert(a[i]);
  for(int i=0;i<n;i++){
    if(s.find(a[i]-1)!=s.end()){
      int curr=1;
      while(s.find(a[i]+curr)!=s.end())
        curr++;
      res=max(res,curr);
    }
  }
  cout<<res;
}