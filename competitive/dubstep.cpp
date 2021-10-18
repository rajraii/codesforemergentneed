#include <bits/stdc++.h>
using namespace std;
void swapa(int a[], int start, int end){
	while(start<end){
		swap(a[start], a[end]);
		start++;
		end--;
	}
}
void rotate(int a[], int d,int n){
	if(n==0) return;
	d=d%n;
	swapa(a,0,d-1);
	swapa(a,d,n-1);
	swapa(a,0,n-1);
}
int main(){
int n; cin>>n;
int a[n];
int d; cin>>d;
for(int i=0;i<n;i++) cin>>a[i];
rotate(a,d,n);
for(int i=0;i<n;i++) cout<<a[i]<<" ";
return 0;
}