#include <bits/stdc++.h>
using namespace std;
void sf(int n){
    int a[100]={0};
    for(int i=2;i<=n;i++){
        if(a[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                a[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(a[i]==0) cout<<i<<" ";
    }
}
void sfp(int n){
    int a[100]={0};
    for(int i=2;i<=n;i++){
        a[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(a[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(a[j]==j) a[j]=i;
            }
        }
    }
    while(n!=1){
        cout<<a[n]<<" ";
        n=n/a[n];
    }

}
int main(){
int n; cin>>n;
sfp(n);
return 0;
}