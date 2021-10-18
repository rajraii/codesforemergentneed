#include<iostream>
#include<valarray>
using namespace std;
int main(){
    int n; cin>>n;
    int t,z(0),f(0);
    for(int i=0;i<n;i++){
        cin>>t;
        if(t==0) z++;
        if(t==5) f++;
    }
    int a[1000]={0};
    if(z==0) cout<<"-1"<<endl;
    else if(f<9) cout<<"0"<<endl;
    else {
        f-= f%9;
        for(int i=0;i<f;i++) cout<<5;
        for(int i=0;i<z;i++) cout<<0;
    }
    return 0;
}