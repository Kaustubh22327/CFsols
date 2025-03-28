#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    ll x;
    cin>>n>>x;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    int ans=0,cnt=0;
    ll mini=LLONG_MAX;
    for(int i=0;i<n;i++){
        cnt++;
        mini=a[i];
        if(cnt*mini>=x){
            ans++;
            cnt=0;
        }
    }
    cout<<ans<<endl;
}
int main(){    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
