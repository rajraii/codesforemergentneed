#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int m; cin>>m;
    int last=0;
    double a,max=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(ceil(a/m)>=max){
            last=i;
            max=ceil(a/m);
        }
    }
    cout<<last<<endl;
}