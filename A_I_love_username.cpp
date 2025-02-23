#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int maxi=0;
    int mini=0;
    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    maxi=vt[0];
    mini=vt[0];
    for(int i=0;i<n;i++){
        if(vt[i]>maxi){
            maxi=vt[i];
            ans++;
        }
        if(vt[i]<mini){
            mini=vt[i];
            ans++;
        }
    }
    cout<<ans<<endl;
}