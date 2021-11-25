// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n,k; cin>>n>>k;
//     int a[n];
//     int maxsum= INT_MIN;
//     for(int i=0;i<n;i++) cin>>a[i];
//     for(int i=0;i+k-1<n;i++){
//         int curr=0;
//         for(int j=0;j<k;j++){
//             curr+=a[i+j];
//             maxsum= max(maxsum,curr);
//         }
//     }
//     cout<<maxsum<<endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l; cin>>n>>l;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int flag=0;
for(int i=0;i<n;i++){
    int curr=0;
    for(int j=i;j<n;j++){
        curr+=a[j];
        if(curr==l) {
            flag=1;
            break;
        } 
    }
}
if(flag==1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
// if all element are +ve - O(n)

bool subsum(int a[], int n, int sum){
    int curr= a[0] , s=0;
    while (int e=1;e<n;e++)
    {
        while(curr>sum && s<e-1){
            curr-=a[s];
            s++;
        }
        if(curr==sum) return true;
        if(e<n) curr+=a[e];
    } 
}