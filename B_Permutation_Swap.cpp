#include <iostream>
using namespace std;

long gcd(long a, long b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        long g = 0;
        for (long p = 1; p <= n; p++) {
            long x;
            cin >> x;
            long diff = abs(p - x);
            g = gcd(g, diff);
        }
        cout << g << endl;
    }
    return 0;
}