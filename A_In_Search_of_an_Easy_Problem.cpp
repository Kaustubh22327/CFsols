#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ishard=false;
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            ishard=true;
            break;
        }
    }
    if(ishard){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}