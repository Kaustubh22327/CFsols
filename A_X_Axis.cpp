#include<bits/stdc++.h>
using namespace std;

void solve(){
   vector<int>vt(3);
   for(int i=0;i<3;i++){
     cin>>vt[i];
   }
   sort(vt.begin(),vt.end());
   int ans=abs(vt[1]-vt[0])+abs(vt[2]-vt[1]);
   cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
