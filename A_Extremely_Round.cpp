#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int ans=0;
        cin>>n;
        if(n<=10){
            cout<<n<<endl;
            continue;
        }
        string num=to_string(n);
        int x=num.length();
        ans=9*(x-1);
        int div=pow(10,x-1);
        int q=n/div;
        ans+=q;
        
        cout<<ans<<endl;
    }
    return 0;
}