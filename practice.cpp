
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int n;
    cin>>n;
    long long int a[n];
    vector<pair<long long int,long long int>>v;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        v.push_back({x,i+1});
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}

int main(){
    int t =1;
    //cin>>t;
    while(t--){
        solve();
    }
}