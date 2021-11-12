// Given an unsorted array that may contain duplicates. Also given a number k which is smaller than size of array. Write a function that returns true if array contains duplicates within k distance.

#include <iostream>
#include<unordered_map>
using namespace std;
int main()
{
  int a[] = {1, 2, 3, 1, 4, 5};
  int k = 3, n = 6;
  bool check=false;
  unordered_map<int,int> m;
  for(int i=0;i<n;i++){
    if(m.find(a[i])!=m.end()){
      check=true;
      break;
    }
    m[a[i]]++;
    if(i>=k) m.erase(a[i-k]);
  }
  if(check) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

}