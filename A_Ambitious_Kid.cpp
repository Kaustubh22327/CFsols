#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=INT_MAX;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            ans=0;
            break;
        }
        int curr=abs(arr[i]);
        ans=min(curr,ans);
    }
    cout<<ans<<endl;
}