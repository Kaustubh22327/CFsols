#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n,x;
            cin>>n>>x;
            int c=2;
            int ans=1;
            while(c<n){
                c+=x;
                ans++;
            }
            cout<<ans<<endl;
        }
    return 0;
}

