#include<iostream>
using namespace std;
// int main(){
//     int n; cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++) cin>>a[i];
//     int res=0;
//     int curr;
//     for(int i=0;i<n;i++){
//         curr=0;
//         for(int j=0;j<n;j++){
//             if(a[i]==a[j]) curr++;
//             res=i;
//         }
//     }
//     if(curr>(n/2) || curr>(n+1)/2) cout<<res<<endl;
//     else cout<<-1;
// }
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int res=0, count=1;
    for(int i=1;i<n;i++){
        if(a[res]==a[i]) count++;
        else count--;
        if(count==0){
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(a[res]==a[i]) count++;
    }
    if(count<=n/2) cout<<-1;
    else cout<<res;
    
}