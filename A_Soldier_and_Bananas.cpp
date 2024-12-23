#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int total_cost = k * w * (w + 1) / 2;
    int money_needed = total_cost - n;
    if (money_needed > 0) {
        cout << money_needed << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
