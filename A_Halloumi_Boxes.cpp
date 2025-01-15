#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool canSortWithReverses(int n, int k, vector<int>& arr) {
    if (k >= 2) return true;
    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());
    return arr == sorted;
}
void solve(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<(canSortWithReverses(n, k, arr) ? "YES" : "NO") << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
