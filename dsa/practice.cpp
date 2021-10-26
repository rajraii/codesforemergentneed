#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
  unordered_map<int,int> m;
  int a[]={1,1,2,3,2,4,5};
  for(int i=0;i<7;i++){
    m[a[i]]++;
  }
  for(auto i: m)
    cout<<i.first<<" "<<i.second<<endl;
  cout<<m.empty()<<endl;
  cout<<m.size();
}