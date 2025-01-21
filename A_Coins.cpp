#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            if(k%2==0){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
                continue;
            }
        }
    }
}