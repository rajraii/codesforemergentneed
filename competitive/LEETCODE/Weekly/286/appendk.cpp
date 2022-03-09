#include <bits/stdc++.h>
using namespace std;

int fun(vector<int>&a, int k){
  // unordered_set<int> s;
  // for(auto i: a)
  //   s.insert(i);
  
  // int i=1;
  // int res=0;
  // while(k--){
  //   if(s.find(i)!=s.end()) {
  //     i++;
  //     k++;
  //     continue;
  //   }
  //   a.push_back(i);
  //   res+=i;
  //   i++;      
  // }
  // int sum=0;
  // for(int i: a)
  //   sum+= i;
  // cout<<res<<endl;
  long long sum=0;
  sort(a.begin(),a.end());
  int i=0, prev=0;
  while(k>0 && i< a.size()){
    int len= a[i]- prev-1;
    if(len>k) len= k;
    if(len>0){
      long long start = prev;
      long long end= start + len;
      long long s= end*(end+1)/2 - start*(start+1)/2; 
      sum+=s; 
      k-= len;
    }
    prev= a[i];
    i++;
  }
  if(k>0){
    long long start = prev;
    long long end= start + k;
    long long s= end*(end+1)/2 - start*(start+1)/2; 
    sum+=s; 
  }

  return sum;
}

int main(){
  vector<int> a={1,4,25,10,25};
  int k=2;
  fun(a,k);
return 0;
}