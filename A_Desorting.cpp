#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vt(n);
        for(int i=0;i<n;i++){
            cin>>vt[i];
        }
        int mingap=INT_MAX;
        for(int i=0;i<n-1; i++){
           int gap=vt[i+1]-vt[i];
           mingap=min(mingap,gap);
        }
        if(mingap<0){
            cout<<0<<endl;
        }
        else if(mingap==1){
            cout<<1<<endl;
        }
        else{
            cout<<mingap/2+1<<endl; 
        }

        
    }
}
