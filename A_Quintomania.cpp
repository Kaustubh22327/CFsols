#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    bool flag=true;
    for(int i=1;i<n;i++){
        int diff=abs(vt[i]-vt[i-1]);
        if(diff!=5&&diff!=7){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}