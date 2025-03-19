#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      string res;
      for(int i=0;i<s.length();i++){
        if(s[i]=='p'){
           res+='q';
        }
        else if(s[i]=='q'){
           res+='p';
        }
        else{
            res+='w';
        }
      }
      reverse(res.begin(),res.end());
      cout<<res<<endl;
    }
    return 0;
}