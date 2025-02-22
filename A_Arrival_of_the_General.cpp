#include <iostream>
#include <vector>
using namespace std;

int minSwaps(int n, vector<int>& h) {
    int mx=0,mn=0;
    for(int i=0;i<n;i++) {
        if(h[i]>h[mx])mx=i;
        if(h[i]<=h[mn])mn=i;
    }
    int swaps = mx + (n-1-mn);
    if(mx > mn) swaps--;
    return swaps;
}

int main() {
    int n;
    cin>>n;
    vector<int> h(n);
    for(int i=0;i<n;i++)cin>>h[i];
    cout<<minSwaps(n,h)<<endl;
}
