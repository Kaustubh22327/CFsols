#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        if(n == 1) {
            cout << "1\n";
            cout << b[0] << "\n";
            continue;
        }
        
        vector<int> a(2*n-1);
        a[0] = b[0];
        
        int b_idx = 1;
        for(int i = 1; i < 2*n-1; i++) {
            if(i % 2 == 0) {
                a[i] = b[b_idx++];
            } else {
                a[i] = 1;
            }
        }
        
        for(int i = 1; i < 2*n-1; i += 2) {
            a[i] = min(a[i-1], a[i+1]) - 1;
            if(a[i] <= 0) a[i] = 1;
        }
        
        cout << 2*n-1 << "\n";
        for(int i = 0; i < 2*n-1; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}