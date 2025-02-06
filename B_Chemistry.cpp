#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mpp;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        int count=0;
       for (auto &entry : mpp) {
            if (entry.second % 2 != 0) {
                count++;
            }
        }


        if(k>=n){
            cout<<"NO"<<endl;
        }
        else if(count<=k+1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}