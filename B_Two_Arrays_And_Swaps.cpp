#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       vector<int>a(n);
       vector<int>b(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       for(int i=0;i<n;i++){
        cin>>b[i];
       }
       sort(a.begin(),a.end());
       sort(b.rbegin(),b.rend());
       int x=0;
       int sum=0;
       for(int i=0;i<n;i++){
            if(x<k && a[i]<b[i]){
                swap(a[i],b[i]);
                x++;
            }
            sum+=a[i];
       }
       cout<<sum<<endl;
    }
    return 0;
}

