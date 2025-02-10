// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//     int n, k;
//     cin >> n >> k;

//     vector<int> nums(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> nums[i];
//     }

    
//     sort(all(nums));

//     int cnt = 1, ans = 1; 
//     for (int i = 1; i < n; ++i) {
//         if (nums[i] - nums[i - 1] > k) {
//             cnt = 1;
//         } else {
//             ++cnt; 
//         }
//         ans = max(ans, cnt); 
//     }

   
//     cout << n - ans << '\n';
// }

// int32_t main() {
//     fast_io();
//     int t;  
//     cin >> t;  
//     while (t--) {
//         solve(); 
//     }
//     return 0; 
// }
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    int cnt = 1, ans = 1; 
    for (int i = 1; i < n; ++i) {
        if (nums[i] - nums[i - 1] > k) {
            cnt = 1;
        } else {
            ++cnt; 
        }
        ans = max(ans, cnt); 
    }

   
    cout << n - ans << '\n';
}
int main() {
    int t;  
    cin >> t;  
    while (t--) {
        solve(); 
    }

}