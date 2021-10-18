#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[], int n){
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum<0) sum=0;
        maxsum=max(maxsum, sum);
    }
    return maxsum;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];   
        a[i]=-a[i];
    }
    wrapsum=totalsum+ kadane(a,n);
    cout<<max(wrapsum, nonwrapsum);
    return 0;
}