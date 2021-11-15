// Print all the subsequence of a string

#include<iostream>
#include<string>
using namespace std;
void print(string a, string res=""){
  if(a.empty()){
    cout<<res<<endl;
    return;
  } 
  print(a.substr(1),res+a[0]);
  print(a.substr(1),res);
}
int main(){
  string a="abc";
  print(a);
}