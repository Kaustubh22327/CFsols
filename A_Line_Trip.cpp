#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,x;
        cin >> n >> x;
        vector<int> stations;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            stations.push_back(a);
        }
        int max_gap = stations[0];
        for(int i = 1; i < n; i++) {
            max_gap = max(max_gap, stations[i] - stations[i-1]);
        }
        max_gap = max(max_gap, 2*(x  -stations[n-1]));
        cout << max_gap << endl;
    }
    return 0;
}