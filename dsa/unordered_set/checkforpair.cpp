// Print pair sum in unsorted array

#include<iostream>
#include<unordered_set>
using namespace std;

// Naive approach with o(n^2)

int main(){
  int n=5;
  int a[n]={1,1,2,3,4};
  int sum=5;
  for(int i=0;i<n;i++){
    int A,b;
    bool check=false;
    for(int j=0;j<n;j++){
      if(a[i]+a[j]==sum) {
        check=true;
        A=a[i];
        b=a[j];
        break;
      }
    }
    if(check=true) {
      cout<<A<<" "<<b;
      break;
    }
  }
  return 0;
}

// Efficent Approach

// int main(){
//   int n=5, sum=5;
//   set<int> s;
//   for(int i=0;i<n;i++){
//     if(s.find(sum-a[i])!=s.end()) return 1;
//     else s.insert(a[i])
//   }
// }