#include<iostream>
#include<map>
using namespace std;
int main(){
    string guest,host,pile;
    cin>>guest>>host>>pile;
    map<char,int>nameCount;
    map<char,int>pileCount;
    for(int i=0;i<guest.length();i++){
        nameCount[guest[i]]++;
    }
    for(int i=0;i<host.length();i++){
        nameCount[host[i]]++;
    }
    for(int i=0;i<pile.length();i++){
        pileCount[pile[i]]++;
    }
    if(nameCount==pileCount){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
