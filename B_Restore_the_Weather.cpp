#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int>a(n), b(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        for(int i=0; i<n;i++){
            cin>>b[i];
        }
        vector<pair<int,int>>vt(n);
        for(int i=0;i<n;i++)vt[i]={a[i], i};
        sort(vt.begin(),vt.end());
        sort(b.begin(),b.end());

        vector<int> result(n);
        for(int i=0; i < n; i++){
            result[vt[i].second]=b[i];
        }

        for(int i=0; i < n; i++)cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
