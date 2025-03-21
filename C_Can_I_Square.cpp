#include <bits/stdc++.h>
using namespace std;
bool helper(long long n){
    long long temp=sqrt(n);

    if(temp*temp==n)
        return true;
    return false;
}
int main(){
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        long long sum=0;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            sum+=x;
        }
        if(helper(sum)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
