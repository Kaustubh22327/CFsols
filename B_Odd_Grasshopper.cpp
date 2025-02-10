#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x,n;
    cin>>x>>n;
    for(long long i=1;i<=n;i++){
        if(x%2==0){
            x=x-i;
        }
        else{
            x=x+i;
        }
    }
    cout<<x<<endl;
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
