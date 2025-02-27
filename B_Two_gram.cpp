#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    unordered_map<string, int>mp;
    for(int i=0; i<n-1; i++){
        string temp="";
        temp+=s[i];
        temp+=s[i+1];
        mp[temp]++;
    }
    int maxFreq=0;
    string ans="";
    for(auto it:mp){
        if(it.second>maxFreq){
            maxFreq=it.second;
            ans=it.first;
        }
    }
    cout<<ans<<endl;
    return 0;

    
}
