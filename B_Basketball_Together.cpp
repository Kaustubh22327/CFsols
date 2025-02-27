#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n;
    ll d;
    cin>>n>>d;
    vector<ll>vt(n);
    for (int i=0;i<n;i++){
        cin >>vt[i];
    }
    sort(vt.begin(),vt.end(),greater<ll>());
    int ans=0;
    int i=0;
    while (i<n){
        ll curr =vt[i];
        if (curr>d){
            ans++;
            i++;
        }
        else{
            ll needed=d/curr;
            if(d%curr>0){
                needed++;
            }
            if (needed*curr<=d){
                needed++;
            }
            if(i+needed<=n){
                ans++;
                i += needed;
            }
            else{
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}