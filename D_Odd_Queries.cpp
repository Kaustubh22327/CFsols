#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, q;
    cin >> n >> q;
    vector<long long> vt(n), psum(n+1, 0);
    long long totalsum = 0;
    for(int i = 0; i < n; ++i) {
        cin >> vt[i];
        totalsum += vt[i];
        psum[i+1] = psum[i] + vt[i];
    }
    while(q--) {
        int l, r, k;
        cin >> l >> r >> k;
        long long gapsum = psum[r] - psum[l-1];
        long long remainingsum = totalsum - gapsum + (r - l + 1LL) * k;
        if(remainingsum % 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}