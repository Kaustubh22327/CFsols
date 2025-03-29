#include <bits/stdc++.h>
using namespace std;
bool helper(vector<vector<int>>&vt){
    return (vt[0][0]<vt[0][1] && vt[0][0]<vt[1][0] && vt[1][0]<vt[1][1] && vt[0][1]<vt[1][1]);
}
void helper2(vector<vector<int>>&vt){
    swap(vt[0][0],vt[0][1]);
    swap(vt[0][0],vt[1][1]);
    swap(vt[0][0],vt[1][0]);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>>vt(2,vector<int>(2));
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>vt[i][j];
            }
        }
        bool possible=false;
        for(int i=0;i<4;i++){
            if(helper(vt)){
                possible=true;
                break;
            }
            helper2(vt);
        }
        if(possible){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
