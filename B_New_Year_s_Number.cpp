#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag=false;
        for(int a=0;a*2020<=n;a++){
            if((n -a*2020)%2021==0){
                flag = true;
                break;
            }
        }
        if (flag){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}