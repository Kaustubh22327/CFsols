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
       int maxi=0;
       for(int i=0;i<n;i++){
        vector<int>b=a;
        b[i]++;
        int currprod=1;
        for(int j=0;j<n;j++){
            currprod=currprod*b[j];
        }
        maxi=max(currprod,maxi);
       }
       cout<<maxi<<endl;
    }
    return 0;
}

