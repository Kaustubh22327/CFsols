#include <iostream>
using namespace std;
long long findFinalPosition(long long x0, long long n) {
    if (n == 0) return x0;
    long long remainder = n % 4;
    if (x0 % 2 == 0) {
        if (remainder == 1) return x0 - n;
        if (remainder == 2) return x0 + 1;
        if (remainder == 3) return x0 - (n + 1);
    } else {
        if (remainder == 1) return x0 + n;
        if (remainder == 2) return x0 - 1;
        if (remainder == 3) return x0 + (n + 1);
    }
    return x0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long x0, n;
        cin >> x0 >> n;
        cout << findFinalPosition(x0, n) << "\n";
    }
    return 0;
}
