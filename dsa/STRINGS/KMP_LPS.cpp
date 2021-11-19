// Find the LPS of every substring 


#include <bits/stdc++.h>
using namespace std;



// Naive 

// int search(string a,int n){
//   for(int i=n-1;i>0;i++){
//     bool flag=true;
//     for(int j=0;j<n;j++){
//       if(a[j]!=a[n-i+j]) flag=false;
//     }
//     if(flag) return i;
//   }
//   return 0;
// }


// KMP

void search(string a, int lps[]){
  lps[0]=0;
  int i=1,len=0;
  int n=a.length();
  while(i<n){
    if(a[i]==a[len]) {
      len++;
      lps[i]=len;
      i++;
    }
    else {
      if(len==0){lps[i]=0;i++;}
      else {len=lps[len-1];}
    }
  }
}
int main(){
  string a="ababacab";
  int n=a.length();
  int lps[n];
  search(a,lps);
  for(int i=0;i<n;i++)
    cout<<lps[i]<<endl;
return 0;
}