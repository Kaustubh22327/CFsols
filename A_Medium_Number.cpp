#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>vt={a,b,c};
        sort(vt.begin(),vt.end());
        cout<<vt[1]<<endl;
    }
}