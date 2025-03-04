#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int>vt(n);
        for(int i=0;i<n;i++){
            cin>>vt[i];
        }
        sort(vt.begin(),vt.end());
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+(vt[n-1]-vt[i]);
        }
        cout<<ans<<endl;
        return 0;

}