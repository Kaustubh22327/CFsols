#include <bits/stdc++.h>
using namespace std;
bool checker(int year) {
    set<int> digits;
    while (year > 0) {
        int digit = year % 10;
        if (digits.count(digit)) {
            return false;
        }
        digits.insert(digit);
        year /= 10;
    }
    return true;
}

int main() {
    int y;
    cin >> y;
    while (true) {
        y++;
        if (checker(y)) {
            cout << y << endl;
            break; // Exit after finding the result
        }
    }

    return 0;
}
