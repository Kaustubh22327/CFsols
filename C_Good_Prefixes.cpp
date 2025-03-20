#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int hh=stoi(s.substr(0,2));
        string mm=s.substr(3,2),period=(hh<12)?"AM":"PM";
        if(hh==0){
            cout<<"12:"+mm+" AM"<<endl;
        }
        else if(hh==12){
            cout<<"12:"+mm+" PM"<<endl;
        }
        else if(hh>12){
            cout<<(hh<22?"0":"")+to_string(hh-12)+":"+mm+" PM"<<endl;
        }
        else{
            cout<<s+" AM"<<endl;
        }
    }
    return 0;
}
