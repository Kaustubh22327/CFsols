#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    int left=5;
    vector<int>vt={a,b,c};
    for(int i=0;i<5;i++){
        sort(vt.begin(),vt.end());
        vt[0]++;
    }
    cout<<vt[0]*vt[1]*vt[2]<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
