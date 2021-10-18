#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    bool check=1;
    for(int i=0;i<s.length();){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4') i+=3;
        else if( s[i]=='1'  && s[i+1]=='4') i+=2;
        else if(s[i]=='1') i++;
        else {
            check=0;
            break;
        }
    }
    if(check==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
return 0;
}