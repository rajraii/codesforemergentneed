// Find the pattern
#include<iostream>
#include<string>
using namespace std;
int main(){
  string a,b;
  cin>>a>>b;
  for(int i=0;i<a.length()-b.size();i++){
    int j;
    for(j=0;j<b.length();j++)
      if(b[j]!=a[i+j])
        break;
    if(j==b.size()) cout<<i<<" ";
  }

}