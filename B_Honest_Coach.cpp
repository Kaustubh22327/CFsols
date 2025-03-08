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
       int mindiff=INT_MAX;
       sort(a.begin(),a.end());
       for(int i=0;i<n-1;i++){
           int cd=a[i+1]-a[i];
           mindiff=min(mindiff,cd);
       }
       cout<<mindiff<<endl;
    }
    return 0;
}

