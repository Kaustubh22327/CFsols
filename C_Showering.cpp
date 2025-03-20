#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n,s,m;
     cin>>n>>s>>m;
     vector<pair<int,int>>vt(n);
     int tsum=0;
     for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        vt[i].first=l;
        vt[i].second=r;
        tsum+=r-l;
     }
     //pehle hi naha le ya last mei naha le 
     if(vt[0].first>=s || m-vt[n-1].second>=s){
        cout<<"YES"<<endl;
     }
     else{
        bool possible=false;
        for(int i=0;i<n-1;i++){
            int gap=vt[i+1].first-vt[i].second;
            if(gap>=s){
                possible=true;
                break;
            }
        }
        if(possible){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     }
    }
    return 0;
}