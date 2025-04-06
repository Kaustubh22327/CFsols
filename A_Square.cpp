#include<bits/stdc++.h>
using namespace std;

void solve(){
   vector<pair<int,int>>vt(4);
   for(int i=0;i<4;i++){
      cin>>vt[i].first>>vt[i].second;
   }
   for(int i=1;i<4;i++){
    if(vt[i].first==vt[0].first){
        int side=vt[i].second-vt[0].second;
        cout<<side*side<<endl;
        break;
    }
   }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
