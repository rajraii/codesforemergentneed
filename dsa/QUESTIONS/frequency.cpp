#include <bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int i=0;
// while(i<n){
//     int count=0;
//     int j=i;
//     int k=0;
//     for(;j<n;j++){
//         if(a[i]==a[j]) {
//             count++; 
//             k++;
//         }
//     }cout<<a[i]<<" "<<count<<endl;
//     i=i+k;
// }
while(i<n){
    int freq=1;
    while(i<n && a[i]==a[i+1]) {
        freq++;
        i++;
    }
    cout<<a[i]<<" "<<freq<<endl;
    i++;
}
if(n==1 || a[n-1]!=a[n-2]) cout<<a[n-1]<<" "<<1;
return 0;
}