#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        unordered_map<char,int>mpp;
        for(int i=0;i<s.length();i++){
            if(mpp[s[i]]==0){
                ans+=2;
                mpp[s[i]]++;
            }
            else{
                ans+=1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
    }
