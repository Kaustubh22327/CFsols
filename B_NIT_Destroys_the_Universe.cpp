#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    set<int>s;
    bool has0=false;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
        if(x==0)has0=true;
    }
    if(has0)cout<<s.size()-1<<"\n";
    else cout<<s.size()<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
