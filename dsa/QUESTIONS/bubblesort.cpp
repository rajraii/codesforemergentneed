#include <bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int counter=1;
// while(counter<n){
//     for(int i=0;i<n-counter;i++){
//         if(a[i]>a[i+1]) swap(a[i],a[i+1]);
//     }
//     counter++;
// }
for(int i=0;i<n-1;i++){
    for(int j=i;j>=0;j--){
        if(a[j]>a[j+1]) swap(a[j],a[j+1]);
    }
}
for(int x:a) cout<<x<<" ";
return 0;
}