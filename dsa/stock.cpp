#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int profit=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[i-1]){
            profit+= (a[i]-a[i-1]);
        }
    }
    cout<<profit<<endl;
    return 0;
}