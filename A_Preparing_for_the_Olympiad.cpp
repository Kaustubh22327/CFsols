#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int maxAbs = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        maxAbs = max(maxAbs, abs(x));
    }

    cout << maxAbs << endl;
}

int main(){
    int t;
    cin >>t;
    while (t--){
        solve();
    }
    return 0;
}
