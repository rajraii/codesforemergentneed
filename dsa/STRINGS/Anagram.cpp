// CHeck if string is anagram
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Naive Solution with O(nlogn)
int main(){
  string a="abcd";
  string b="dbca";
  sort(b.begin(),b.end());
  sort(a.begin(),a.end());
  if(a==b) cout<<"True"<<endl;
  else cout<<"NO"<<endl;
}

// Efficient Solution Hashing O(256)

int main(){
  string a="abcd";
  string b="dbca";
  int count[256];
  for(int i=0;i<a.length();i++){
   count[a[i]]++;
   count[b[i]]--; 
  }
  bool check=true;
  for(int i=0;i<256;i++){
    if(count[i]!=0) check=false;
  }
  if(check) cout<<"YEs"<<endl;
  else cout<<"NO"<<endl;
}

