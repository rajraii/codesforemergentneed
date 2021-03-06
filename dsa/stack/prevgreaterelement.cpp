#include<iostream>
#include<stack>
using namespace std;
int main(){
  int n; cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  
  //Optimal approach with O(n)
  stack<int>s;
  s.push(a[0]);
  for(int i=0;i<n;i++){
    while(s.empty()==false && s.top()<=a[i])
      s.pop();
    int pg=(s.empty())?-1:s.top();
    cout<<pg<<" ";
    s.push(a[i]);
  }

  // Naive appraoch with O(n2)
  for(int i=0;i<n;i++){
    int j;
    for(j=i-1;j>=0;j--){
      if(a[j]>a[i]) {
        cout<<a[j]<<" ";
        break;
      }
    }
    if(j==-1) cout<<"-1"<<" ";
  }
}