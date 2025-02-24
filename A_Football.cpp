#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int cnt=0;
    bool res=false;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            cnt++;
            if(cnt>=6){
                res=true;
                break;
            }
        }
        else{
            cnt=0;
        }
    }
    if(res){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
