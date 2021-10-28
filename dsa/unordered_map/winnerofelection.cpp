// Given votes in election, find the winner

#include<iostream>
#include<unordered_map>
#include<vector> 
using namespace std;

// Naive approach- count with O(n^2*max_len)

int main(){
  vector<string> v={"abc", "xyz", "abc", "xyz"};
  unordered_map<string, int> m;
  for(auto i: v)
    m[i]++;
  int freq=0;
  string winner="";
  for(auto i: m){
    if(i.second>freq){
      freq=i.second;
      winner=i.first;
    }
    else if(i.second==freq && i.first<winner){
      winner=i.first; // If there are similar freq element we choose lexicographical winner
    }
  }
  cout<<winner;
}