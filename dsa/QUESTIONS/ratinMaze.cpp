#include<iostream>
using namespace std;
bool isSafe(int** a, int x, int y, int n){
    if(x<n && y<n && a[x][y]==1) return true;
    else return false;
}
bool ratinMaze(int**a, int x, int y, int n, int**b){
    if(x==n-1 && y==n-1) { b[x][y]=1; return true; }
    if(isSafe(a,x,y,n)){
        b[x][y]=1;
        if(ratinMaze(a,x+1,y,n,b)) return true;
        if(ratinMaze(a,x,y+1,n,b)) return true;
        b[x][y]=0;
        return false;
    }
    return false;
}
int main(){
    int n; cin>>n;
    int** a= new int*[n];
    for(int i=0;i<n;i++) a[i]= new int[n];
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++) cin>>a[i][j];
    int** b= new int*[n];
    for(int i=0;i<n;i++){
        b[i]= new int[n];
        for(int j=0;j<n;j++) b[i][j]=0;    
    }
    if(ratinMaze(a,0,0,n,b)){
        for(int i=0;i<n;i++){ 
            for(int j=0;j<n;j++) cout<<b[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}