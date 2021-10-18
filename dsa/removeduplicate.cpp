#include<iostream>
#include<string.h>
using namespace std;
string replace(string s){
    if(s[0]==0) return "";
    char ch=s[0];
    string ans= replace(s.substr(1));
    if(ch==ans[0]) return ans;
    return ch+ans;

    replace(s);
}
int main(){
    string s; cin>>s;
    cout<<replace(s);
}