#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<n;i++){
        char ch=tolower(s[i]);
        int c=ch-'a';
        hash[c]++;
    }
    bool result=true;
    for(int i=0;i<26;i++){
        if(hash[i]<1){
            result=false;
            break;
        }
    }
    if(result){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }

}

//pangram