#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long m,a,b,c;
        cin>>m>>a>>b>>c;
        long long ans=0;
        long long row1=min(m,a);
        long long row2=min(m,b);
        long long left=2*m-row1-row2;
        long long extra=min(left,c);
        ans=row1+row2+extra;
        cout<<ans<<endl;
    }
    return 0;
}