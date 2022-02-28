// Job Sequencing  Problem

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// sort job in decreasing order of progit
// initialisze the sesult as first job in sorted list 
// assign the latest possible slot
// Do following for the remaining (n-1) jobs
// if job can not be added ignore it 
// else add it to the possible slot

struct job{
  char id;
  int dead;
  int profit;
};

bool myCmp(job a, job b){
  return a.profit > b.profit;
}

void printJobSechudeling(job arr[], int n){
  sort(arr, arr+n, myCmp);
  bool done[n]= {0};
  vector<char> a;
  for(int i=0, k=0;i<n; i++){
    for(int j=min(n, arr[i].dead)-1; j>=0; j--){
      if(done[j] == false){
        a.push_back(arr[j].id);
        done[j]=true;
        break;
      }
    }
  }
  for(auto i: a) cout<<i <<" ";
  
}

int main(){
  job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}};
  printJobSechudeling(arr, 5);
}