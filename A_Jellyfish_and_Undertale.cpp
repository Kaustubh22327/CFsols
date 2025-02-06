#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long res=0;
        vector<long long>tools(n);
        for(long long i=0;i<n;i++){
            cin>>tools[i];
            res+=min(tools[i],a-1);
        }
        res+=b;
        cout<<res<<endl;
    }
}