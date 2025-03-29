#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,ans=0;
    cin>>n;
    unordered_map<int,int>mpp;
    for(int i=0,x;i<n;i++){
        cin>>x;
        mpp[x]++;
    }
    for(auto p:mpp){
        ans+=p.second/2;
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
