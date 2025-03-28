#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        int maxi=n*p;
        int mini=n*(-p);
        if(k<mini||k>maxi){
            cout<<-1<<endl;
        } 
        else{
            int ops=abs(k)/p;
            if(abs(k)%p!=0){
                ops++;
            }
            cout<<ops<< endl;
        }
    }
    return 0;
}
