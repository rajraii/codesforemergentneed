// Fracticional Knapsack

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


// Take the weight/value ratio and sort the array in the decreasing order of their ratio
//  if you can take the weight take it, else take it partially

bool myCmp(pair<int,int> a,pair<int,int> b){
  double r1= (double)(a.first/ a.second);
  double r2= (double)(b.first/ b.second);
  return r1>r2;
}


int fractionalKnaosack(vector<pair<int,int>>p, int W, int n){
  
  sort(p.begin(), p.end(), myCmp);
  int res=0;
  for(int i=0;i<n;i++){
    if(p[i].second<=W){
      res+= p[i].first;
      W -= p[i].second;
    }
    else {
      res += p[i].first * double((double)W / p[i].second);
      return res;
    }
  }
  return res;
}

int main(){
  int n=3;
  int w[n]= {30,20,10};
  int val[n]= {120, 100, 60};
  vector<pair<int,int>> p;
  for(int i=0;i<n;i++){
    p.push_back({val[i],w[i]});
  }
  int W= 50;
  cout<<fractionalKnaosack(p,W,n);
}