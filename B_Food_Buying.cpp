#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        long long s;
        cin>>s;
        long long ans = 0;
        while(s>=10){
            s-=10;
            ans+=10;
            s+=1;
        }     
        ans+=s;  
        cout<<ans<<endl;
    }
    
    return 0;
}