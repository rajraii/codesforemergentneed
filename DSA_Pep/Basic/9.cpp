#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &mat,int r, int c, string res, bool visited[3][3]){
  if(r<0 || c<0 ||c>=mat[0].size() || r>=mat.size() 
    || mat[r][c]==1 || visited[r][c]==true){
    return;
  }
  if(r==mat.size()-1 && c==mat[0].size()-1){
    cout<<res<<endl;
    return;
  }
  visited[r][c]=true;
  solve(mat, r-1, c, res+"t",visited );
  solve(mat, r, c-1, res+"l",visited);
  solve(mat, r+1, c, res+"d",visited);
  solve(mat, r, c+1, res+"r",visited);
}

int main(){
  vector<vector<int>> mat = {
    {0,0,0},
    {1,0,1},
    {0,0,0}
  };
  bool visited[3][3]= {false};
  solve(mat,0,0,"", visited);
return 0;
}