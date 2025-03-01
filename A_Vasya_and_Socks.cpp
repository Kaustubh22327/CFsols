#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
        int n,m;
        cin>>n>>m;
        int cnt=1;
        int ans=0;
        vector<int>vt;
        for(int i=0;i<n;i++){
            vt.push_back(cnt);
            cnt++;
        }
        int i=1;
        while(i<=vt.size()){
            if(i%m==0){
                vt.push_back(cnt);
                cnt++;
            }
            i++;
            
        }
        cout<<vt.size()<<endl;
        // while(cnt<n){
        //     if(cnt%m==0){
        //         ans+=2;
        //         cnt++;
        //     }
        //     else{
        //         cnt++;
        //         ans++;
        //     }
        // }
        // if(cnt%m==0){
        //     ans+=2;
        // }  
        // cout<<ans<<endl;
    return 0;
}