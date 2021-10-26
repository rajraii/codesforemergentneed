// Find Greater elements for every element 

#include<iostream>
#include<map>
using namespace std;
int main(){
  int a[]={10,5,8,20,30,8};
  map<int, int> m;
  for(int i=0;i<6;i++) m[a[i]]++;
  // int n=m.size();
  // int count=1 ;
  // for(auto i: m){
  //   cout<<i.first<<" "<<n-count<<endl;
  //   count++;
  // }
  int cum_freq=0;
  for(auto i=m.rbegin(); i!=m.rend(); i++){
    int freq= i->second;
    i->second=cum_freq;
    cum_freq+=freq;
  }
  for(int i=0; i<7;i++){
    cout<<m[a[i]]<<" ";
  }
}

// ALTERNATE APPROACH

1- array
2- copy array in a temp array sort that
3- traverse through the arr and use bin search in temp[] to find greater count 