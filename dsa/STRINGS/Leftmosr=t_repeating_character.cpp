// Print the leftmost repating element

#include<iostream>
#include<string> 
using namespace std;
int main(){
  // naive- sorting
  // better- hashing
  // efficient- hashing with optimization
  int temp[256];
  fill(temp,temp+256,false);
  int res=-1;
  string a="abc";
  for(int i=a.length()-1;i>=0;i--){
    if(temp[a[i]]) res=i;
    else temp[a[i]]=true;
  }
  cout<<res<<endl;
}
 