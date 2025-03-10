#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       vector<string>vt(n);
       for(int i=0;i<n;i++){
        cin>>vt[i];
       }
       vector<string>res(k);
       int r,c=0;
       for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k){
                cout<<vt[i][j];
            }
            cout<<endl;
       }
    //    for(int i=0;i<k;k++){
    //     for(int j=0;j<k;j++){
    //         cout<<res[j][k]
    //     }
    //    }
    }
    return 0;
}

