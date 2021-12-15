#include<iostream>
#include<stack>
using namespace std;

bool match(char a, char b){
  return ((a=='(' && b==')') || (a=='{'  && b=='}') || (a=='[' && b==']'));
}
bool check(string s){
  stack<char> a;
  for(int i=0;i<s.length();i++){
    if(s[i]=='(' || s[i]=='{' || s[i]=='[') a.push(s[i]);
    else{
      if(a.empty()==true) return true;
      else if(match(s[i],a.top())==false) return false;
      else a.pop();
    }
  }
  return (a.empty()==true);
}

int main(){
  string s; cin>>s;
  if(check(s)) cout<<"yes"<<endl;
  else cout<<"no"<<endl;
}