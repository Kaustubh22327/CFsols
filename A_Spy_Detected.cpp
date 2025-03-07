#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>mpp;
        vector<int>vt(n);
        for(int i=0;i<n;i++){
            cin>>vt[i];
            mpp[vt[i]]++;
        }   
        int y=0;
        for(auto it:mpp){
            if(it.second==1){
                y=it.first;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(vt[i]==y){
                cout<<i+1<<endl;
                break;
            }
        }
        
    }
    return 0;
    }
