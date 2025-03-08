#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       bool can=true;
       sort(a.begin(),a.end());
       for(int i=0;i<n-1;i++){
           if(a[i]==a[i+1]){
             can=false;
             break;
           }
       }
       if(can){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}

