// Print all subseqence

#include<iostream>
#include<unordered_map>
using namespace std;

void print(string &s, string curr, int i,int n){
  if(i==n){
    cout<< curr<<endl;
    return;
  }
  print(s, curr+s[i], i+1, n);
  print(s, curr, i+1, n);
}
int main(){
  string s ="abc";
  print(s,"", 0,3);
}