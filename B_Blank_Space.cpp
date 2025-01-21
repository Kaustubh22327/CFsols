#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int maxlen=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            int currlen=0;
            if(arr[i]==0){
                for(int j=i;j<n;j++){
                    if(arr[j]==0){
                        currlen++;
                    }
                    else{
                        break;
                    }
                }
                maxlen=max(maxlen,currlen);
            }
        }
        cout<<maxlen<<endl;
    }
}