#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void permute(vector<int> &a, int i){
    if(i==a.size()) {
        ans.push_back(a);
        return;
    }
    for(int j=i;j<a.size();i++){
        swap(a[j],a[i]);
        permute(a,i+1);
        swap(a[i],a[j]);
    }
    return;
}
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &i : a) cin>>i;
    permute(a,0);
    for( auto v: ans){
        for (auto i: v)
            cout<<i<<" ";
        cout<<"\n";
    }
return 0;
}