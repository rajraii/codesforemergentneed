#include<iostream>
#include<strings.h>
using namespace std;
void moveX(string s, int i, int l){
    if(i>=l) return;
    char curr=s[i];
    if(curr!='x') cout<<curr;
    moveX(s,i+1,l);
    if(curr == 'x') cout<<curr;
    return;
}
int main(){
    string s; cin>>s;
    int l=s.length();
    moveX(s,0,l);
}