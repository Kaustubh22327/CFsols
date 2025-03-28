#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(ll x,ll y){
    return(x/(y+1))*y+min(x%(y+1),y);
}
void solve(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin>>q;
    vector<ll>r;
    while(q--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll p=1,s=b,w=b;
        while(p<=s){
            ll z=(p+s)/2;
            if(a*f(b,z)>=c){
                w=z;
                s=z-1;
            }else{
                p=z+1;
            }
        }
        r.push_back(w);
    }
    for(ll v:r){
        cout<<v<<"\n";
    }
}
int main(){
    solve();
    return 0;
}