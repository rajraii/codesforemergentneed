//Print Repeating element in array

#include<iostream>
#include<unordered_set>
using namespace std;

//   Naive Approach with O(n^2)
 
// int main(){
//   int n=5;
//   int a[n]={1,1,3,2,2};
//   for(int i=0;i<n;i++){
//     bool flag=false;
//     for(int j=0;j<i;j++){
//       if(a[i]==a[j]) {
//         flag=true;
//         break;
//       }
//     }
//     if(flag == true) cout<<a[i]<<" ";
//   }
//   return 0;
// }


//    Efficient Approach with O(n)

int main(){
  int n=5;
  int a[n]={1,1,3,2,2};
  unordered_set<int>s;
  for(int i=0;i<n;i++){
    if(s.find(a[i])==s.end()) s.insert(a[i]);
    else cout<<a[i]<<" ";
  }
}