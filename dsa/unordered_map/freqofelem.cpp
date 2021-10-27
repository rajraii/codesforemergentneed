// Print Frequency of every element
#include <iostream>
#include <unordered_map>
using namespace std;
// Algorithm approach O(n) and O(1)
  // reduce all elem by 1
  // traverse  array and add n to index(input[i]%n)
  // Print count of i+1 as input[i]/n set input[i]=input[i]%n+1


// Hashing Approach O(n)

int main(){
  int n=5;
  int a[n]={1,1,2,2,4};
  unordered_map<int,int> m;
  for(int i=0;i<n;i++){
    m[a[i]]++;
  }
  for(auto i: m) cout<<i.first<<" "<<i.second;
}
