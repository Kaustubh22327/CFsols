#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mpp[x]++;
       }
       int sum=0;
       for(auto it:mpp){
           if(it.second!=1){
                if(it.second==2){
                    sum+=1;
                }
                else if(it.second!=2 && it.second %2==0){
                    //saare element hata denge
                    sum+=it.second;
                }
                else{
                    //ek element reh jaayega
                    sum+=it.second-1;
                }
           } 
       }
       cout<<n-sum<<endl;
    }
    return 0;
}

