#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> b(n), a;
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        // Construct the sequence a
        a.push_back(b[0]); // Add the first element of b to a
        for (int i = 1; i < n; ++i) {
            if (b[i] < b[i - 1]) {
                a.push_back(1); // Add 1 if b[i] <= b[i-1]
            }
            a.push_back(b[i]);
        }

        // Output the results
        cout << a.size() << "\n";
        for (int x : a) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
