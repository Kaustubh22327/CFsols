#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long mc=0;
        bool possible=true;
        for(int i=n-2;i>=0;i--){
            while(arr[i]>=arr[i+1] &&arr[i]>0){
                arr[i]/=2;
                mc++;
            }
            if(arr[i]==arr[i+1]){
                possible=false;
                break;
            }
        }
        if(!possible){
            cout<<-1<<endl;
        }
        else{
            cout<<mc<<endl;
        }
    }
    return 0;
}
