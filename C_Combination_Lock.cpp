#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<-1<<'\n';
        return;
    }
    vector<int> a(n);
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    int i=0,j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(int val:a){
        cout<<val<<" ";
    }
    cout<<'\n';
}
int32_t main(){
    fast_io();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}