#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      unordered_map<char,int>mpp;
      for(int i=0;i<s.length();i++){
         mpp[s[i]]++;
      }
      if(mpp.size()==1){
        cout<<"NO"<<endl;
        continue;
      }
      else{
        for(int i=0;i<s.length();i++){
            if(s[i]!=s[0]){
                swap(s[i],s[0]);
                break;
            }
        }
        
      }
      cout<<"YES"<<endl;
      cout<<s<<endl;
    
    }
    return 0;
}