#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>vt(n);
    int l,m,r=0;
    for(int x=0;x<n;x++){
        cin>>vt[x];
    }
    bool found=false;
    for(int j=1;j<n-1;j++){
        int cl,cm,cr=0;
        cm=j;
        bool leftfound=false;
        bool rightfound=false;
        //left mein check
        for(int i=0;i<j;i++){
            if(vt[i]<vt[j]){
                leftfound=true;
                cl=i;
                break;
            }    
        }
        //right mein check
        for(int k=j+1;k<n;k++){
            if(vt[k]<vt[j]){
                rightfound=true;
                cr=k;
                break;
            }    
        }
        found=leftfound&&rightfound;
        if(found==true){
            l=cl;
            m=cm;
            r=cr;
            break;
        }
    }
    if(found){
        cout<<"YES"<<endl;
        cout<<l+1<<" "<<m+1<<" "<<r+1<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
