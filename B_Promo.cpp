#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    sort(vt.begin(),vt.end());
    vector<ll>prefix(n+1,0);
    for(int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+vt[i];
    }
    while(q--){
        int x,y;
        cin>>x>>y;
        ll val=prefix[n-x+y]-prefix[n-x];
        cout<<val<<endl;
    }
    return 0;
}