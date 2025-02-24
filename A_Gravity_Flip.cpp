#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    sort(vt.begin(),vt.end());
    for(int i=0;i<n;i++){
        cout<<vt[i]<<" ";
    }
    return 0;
}
