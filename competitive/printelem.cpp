#include <bits/stdc++.h>
using namespace std;
void search(int *a,int n,int x,int i=0){
    string names;
    string a="";
    for(int i=0;i<n;i++){
        if(names[i].length()>a.lenght()) a.length()=names[i].length();
    }
    return a.length();
}

int main(){
int n,x; cin>>n>>x;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
search(a,n,x);
return 0;
}