// Return the max all subarray of size k

#include<iostream>
#include<deque>
using namespace std;

void print(int a[],int n, int k){
  deque<int> d;
  for(int i=0;i<k;i++){
    while(!d.empty() && a[i] >= a[d.back()]) d.pop_back();
    d.push_back(i);
  }
  for(int i=k;i<n;i++){
    cout<<a[d.front()]<<endl;
    while(!d.empty() && d.front() <=i-k) d.pop_front();
    while(!d.empty() && a[i] >= a[d.back()]) d.pop_back(); 
    d.push_back(i);
  }
  cout<<a[d.front()]<<endl;
}


int main(){
  int k=3,n=5;
  int a[n]= {20,40,30,10,60};
  print(a,n,k);
}