#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }

        sort(a.begin(), a.end());

        int maxValidLength=0;
        int i=0;
        for (int j=0; j<n; j++) {
            while (a[j]-a[i]>k) {
                i++;
            }
            maxValidLength=max(maxValidLength, j-i+1);
        }

        int toRemove=n-maxValidLength;
        cout<<toRemove<<'\n';
    }

    return 0;
}
