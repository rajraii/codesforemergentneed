#include <bits/stdc++.h>
using namespace std;

void solve(int row, int col,vector<vector<int>> &maze, vector<vector<int>> &visit, vector<string> &ans, string s){
  if(row==maze.size() && col==maze[0].size()) {
    ans.push_back(s);
    return;
  }
  if(row==0 || row >= maze.size() || col==0 || col>=maze[0].size()) return;
  if(visit[row + 1][col]==0){
    visit[row][col]=1;
    solve(row+1, col, maze, visit, ans, s+"D");
    visit[row][col]=0;
  }
  if(visit[row - 1][col]==0){
    visit[row][col]=1;
    solve(row+1, col, maze, visit, ans, s+"U");
    visit[row][col]=0;
  }
  if(visit[row][col + 1]==0){
    visit[row][col]=1;
    solve(row+1, col, maze, visit, ans, s+"R");
    visit[row][col]=0;
  }
  if(visit[row][col - 1]==0){
    visit[row + 1][col]=1;
    solve(row+1, col, maze, visit, ans, s+"L");
    visit[row][col]=0;
  }
}

string ratInMaze(vector<vector<int>> maze){
  vector<vector<int>> visit(maze.size()-1, vector<int>(maze.size()-1,0));
  vector<string> ans;
  solve(0, 0,maze, visit, ans, "");
}

int main(){

return 0;
}