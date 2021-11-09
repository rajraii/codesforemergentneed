// Hash(key)= (h(k)+k*k)%n

#include<iostream>
#include<vector>
using namespace std;

void Quadratic_probing(int arr[], int n){
  vector<int> v(10,-1);
  for(int i=0;i<n;i++){
    int h= arr[i]%n;
    if(v[h]==-1) v[h]=arr[i];
    else{
      for(int j=0;j<10;j++){
        int t=(h+j*j)%10;   // quadratic probing
        if(v[t]==-1) {    
          v[t]=arr[i];
          break;
        }
      }
    }
  }
  for(auto i: v) cout<<i<<" ";
}
int main(){
  int a[]={700, 50, 85, 73, 101, 92, 76};
  int n=7;
  Quadratic_probing(a,n);
}