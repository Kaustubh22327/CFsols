#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    vector<int> count(n + 1, 0); // count of each number in b so far
    
    // For each position i, we'll ensure a[i] becomes a mode
    for(int i = 0; i < n; i++) {
        // First, place a[i] at position i
        b[i] = a[i];
        count[a[i]]++;
        
        // Find current maximum frequency
        int max_count = 0;
        for(int j = 1; j <= n; j++) {
            max_count = max(max_count, count[j]);
        }
        
        // If this is not first element and a[i]'s frequency isn't highest,
        // we need to adjust previous elements
        if(i > 0 && count[a[i]] < max_count) {
            // Find a number that can be used to balance frequencies
            for(int j = 0; j < i; j++) {
                if(count[a[i]] >= max_count) break;
                if(b[j] != a[i]) {
                    count[b[j]]--;
                    b[j] = a[i];
                    count[a[i]]++;
                }
            }
        }
    }
    
    // Output the result
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}