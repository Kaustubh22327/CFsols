#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b;
        vector<int> c;
        sort(a.begin(),a.end());
        b.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]==a[0]){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        
        if(b.empty() || c.empty()) {
            cout << -1 << "\n";
            continue;
        }
        
        cout << b.size() << " " << c.size() << "\n";
        for(int x : b) cout << x << " ";
        cout << "\n";
        for(int x : c) cout << x << " ";
        cout << "\n";
    }
    return 0;
}