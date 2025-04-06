#include<bits/stdc++.h>
using namespace std;
void solve(){
    int k;
    cin>>k;
    vector<int>vt(k);
    for(int i=0;i<k;i++){
        cin>>vt[i];
    }
    int tn=k-2;
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(vt[i]*vt[j]==tn){
                cout<<vt[i]<<" "<<vt[j]<<endl;
                return;
            }
        }
    }
    cout<<"No such pair found"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
