#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long a,b,c,d;
       cin>>a>>b>>c>>d;
       long long ans=0;
       ans+=b;
       if(b>=a){
           cout<<ans<<endl;
       }
       else{
           long long left=a-b;
           long long gapsleep=c-d;
           if(gapsleep<=0){
               cout<<-1<<endl;
               continue;
           }
           long long numofalarms=ceil(double(left)/double(gapsleep));
           long long moretime=numofalarms*c;
           ans+=moretime;
           cout<<ans<<endl;
       }
    }
    return 0;
}