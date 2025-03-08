#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string res="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            res=res+'0';
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            i++;
            res=res+'1';
        }
        else{
            i++;
            res=res+'2';
        }
    }
    cout<<res<<endl;
    return 0;
}

