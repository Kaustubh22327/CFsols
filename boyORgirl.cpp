#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    set<int>st;
    for(int i=0;i<name.size();i++){
        st.insert(name[i]);
    }
    int decider=st.size();
    if(decider%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }


}