#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int a,b,c;
       cin>>a>>b>>c;
       int diff=abs(a-b);
       int total=diff*2;
       if(a>total|| b>total|| c>total){
         cout<<-1<<endl;
       }
       else{
         if(c+diff>total){
            cout<<(c+diff)%total<<endl;
         }
         else{
            cout<<(c+diff)<<endl;
         }
       }
    }
    return 0;
}

