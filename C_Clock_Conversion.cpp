#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int hours=stoi(s.substr(0,2));
        string mins=s.substr(3,2);
        if(hours==0){
            cout<<"12:"+mins+" AM"<<endl;
        }
        else if(hours==12){
            cout<<"12:"+mins+" PM"<<endl;
        }
        else if(hours>12){
            cout<<(hours<22?"0":"")+to_string(hours-12)+":"+mins+" PM"<<endl;
        }
        else{
            cout<<s+" AM"<<endl;
        }
    }
    return 0;
}
