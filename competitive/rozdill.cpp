#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int min=INT_MAX;
    int idx=0;
    bool count=1;
    for(int i=0;i<n;i++){
        
        if(a[i]<min){
            min=a[i];
            idx=i+1;
            count=1;
        }
        else if(a[i]==min) {
            count=0;
        }
    }
    if(count!=1) cout<<"Still Rozdil"<<endl;
    else cout<<idx<<endl;
}