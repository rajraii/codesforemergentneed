#include<iostream>
#include<string.h>
using namespace std;
void permutation( string s, int i=0){
    if(i==s.length()-1) {
        cout<<s<<endl;
    }
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        permutation(s,i+1);
        swap(s[i],s[j]);
    }
}
int main(){
    string s; cin>>s;
    permutation(s);
}