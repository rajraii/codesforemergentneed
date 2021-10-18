#include<iostream>
#include<string.h>
using namespace std;
void substr(string s, int i=0, string curr=""){
    if(i==s.length()){
        cout<<curr<<endl;
        return;
    }
    substr(s,i+1,curr+s[i]);
    substr(s,i+1,curr);
}
void substrWithAscii(string s, string ans){
    if(s.length()==0) {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);

    substrWithAscii(ros, ans);
    substrWithAscii(ros, ans+ch);
    substrWithAscii(ros, ans+to_string(code));
}
int main(){
    string s; cin>>s;
    substrWithAscii(s,"");
}