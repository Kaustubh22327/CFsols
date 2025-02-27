#include<bits/stdc++.h>
using namespace std;
int main(){
    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    cin>>dir;
    string s;
    cin>>s;
    if(dir=='L'){
        for(int i=0;i<s.size();i++){
            for(int j=0;j<keyboard.size();j++){
                if(s[i]==keyboard[j]){
                    cout<<keyboard[j+1];
                    break;
                }
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            for(int j=0;j<keyboard.size();j++){
                if(s[i]==keyboard[j]){
                    cout<<keyboard[j-1];
                    break;
                }
            }
        }
    }

}
