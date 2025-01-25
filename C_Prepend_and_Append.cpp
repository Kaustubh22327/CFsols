#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int ans=n;
       if(n==0){
           cout<<0<<endl;
           continue;
       }
       int i=0;
       int j=s.length()-1;
       while(i<j){
           if((s[i]=='0'&&s[j]=='1')||(s[i]=='1'&&s[j]=='0')){
               i++;
               j--;
               ans=ans-2;
           }
           else{
               break;
           }
       }
       cout<<ans<<endl;
   }
}