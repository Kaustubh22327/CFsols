#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int j=0;
        for(int i=0;i<s.length();i++){
            if(j<t.length()&&s[i]==t[j]){
                j++;
            }
        }
        if(j==t.length()){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}