#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long maxcnt=0;
        long long cnt=0;
        for(long long i=1;i*i<n;i++){
            if(n%i==0){
                cnt++;
                maxcnt=max(cnt,maxcnt);
                
            }
            else{
                cnt=0;
            }
        }
        cout<<maxcnt<<endl;
    }
}