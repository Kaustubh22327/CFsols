#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>d>>e;
        int maxi=0;
        //pehla case
        c=a+b;
        int cnt=0;
        vector<int>vt={a,b,c,d,e};
        for(int i=0;i<2;i++){
            if(vt[i+2]==vt[i]+vt[i+1]){
                cnt++;
            }
        }
        maxi=max(maxi,cnt);
        cnt=0;
        //dusra case 
        vt[2]=vt[3]-vt[1];
        for(int i=0;i<2;i++){
            if(vt[i+2]==vt[i]+vt[i+1]){
                cnt++;
            }
        }
        maxi=max(maxi,cnt);
        cnt=0;
        //teesra case
        vt[2]=vt[4]-vt[3];
        for(int i=0;i<2;i++){
            if(vt[i+2]==vt[i]+vt[i+1]){
                cnt++;
            }
        }
        maxi=max(maxi,cnt);
        cnt=0;
        cout<<maxi<<endl;
    }
}