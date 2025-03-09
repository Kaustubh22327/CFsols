#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       string res="";
       int n=s.length();
       for(int i=0;i<n;i++){
         if(s[i]==s[i+1]){
            res+=s[i];
            i++;
         }
         else{
            res=res+s[i];
         }
       }
       if(s[n-1]==s[n-2]){
        res+=s[n-1];
    }
       cout<<res<<endl; 
    }
   
}