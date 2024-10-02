#include<bits/stdc++.h> 
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> vt(n); 
    int total_sum=0;
    for (int i = 0; i < n; i++){
        cin>>vt[i];
        total_sum+=vt[i];
    }
    sort(vt.rbegin(),vt.rend());
    int current_sum=0,coin_count=0;
    for (int i=0;i<n;i++){
        current_sum+=vt[i];
        coin_count++;
        if (current_sum>total_sum-current_sum) {
            cout<<coin_count<<endl;
            return 0;
        }
    } 
    return 0;
}
