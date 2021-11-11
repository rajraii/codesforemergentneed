// Bear and Segment 01 Problem Code: SEGM01
// Bear Limak has a string S. Each character of S is a digit '0' or '1'.

// Help Limak and check if all the '1' digits form a single non-empty segment (consecutive subsequence) in the string. For each test case, print "YES" or "NO" accordingly.

// Input
// The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

// The only line of each test case contains one string S, consisting of digits '0' and '1' only.

// Output
// For each test case, output a single line containing the answer — "YES" if all the '1' digits form a single non-empty segment, and "NO" otherwise. Don't print the quotes.

#include<iostream>
#include<string>
using namespace std;
#define ll long long

int main(){
  int t; cin>>t;
  while(t--){
    string s; cin>>s;
    int count=0,flag=0;
    for(int i=0;i<s.length();i++){
      if(s[i]=='1'){
        if(flag==1) flag=1;
        else {
          count+=1;
          flag=1;
        }
      }
      else flag=0;
    }
    if(count==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}