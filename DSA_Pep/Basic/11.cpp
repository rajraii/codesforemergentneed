#include <bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>>arr, int row, int col){
  for(int i=row;i>=0;i--){
    if(arr[i][col]==1) return false;
  }
  for(int i=row, j=col; i>=0 && j>=0; i--, j--){
    if(arr[i][j]==1) return false;
  }
  for(int i=row, j=col; i>=0 && j<arr[0].size(); i--, j++){
    if(arr[i][j]==1) return false;
  }
  return true;
}

void rec(vector<vector<int>> arr,string qsf, int row){
  if(row==arr.size()){
    cout<<qsf<<endl;
    return;
  }
  for(int col=0;col<arr[0].size();col++){
    if(check(arr,row,col)){
      arr[row][col]= 1;
      rec(arr,qsf+to_string(row)+"-"+ to_string(col)+ " ", row+1);
      arr[row][col]=0;
    }
  }
}
int main(){
  vector<vector<int>> arr;
  arr = {
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0}
  };
  rec(arr,"",0);
return 0;
}