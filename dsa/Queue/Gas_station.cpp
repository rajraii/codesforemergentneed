#include<iostream>
using namespace std;

int count(int a[], int b[], int n){
  int start=0;
  int req=0, extra=0;
  for(int i=0;i<n;i++){
    extra += (a[i] - b[i]);
    if(extra<0){
      start = i+1;
      req += extra;
      extra =0;
    }
  }
  if(extra + req >= 0) return start;
  return -1;
}