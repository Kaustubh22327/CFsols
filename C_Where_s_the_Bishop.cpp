#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       vector<string>vt(8);
       for(int i=0;i<8;i++){
         cin>>vt[i];
       }
       bool flag=false;
       for(int i=1;i<7 &&!flag;i++){
         for(int j=1;j<7 &&!flag;j++){
            if(vt[i][j]=='#' && vt[i-1][j-1]=='#'&& vt[i-1][j+1]=='#'&& vt[i+1][j-1]=='#'&& vt[i+1][j+1]=='#'){
                cout<<i+1<<" "<<j+1<<endl;
                flag=true;
            }
         }
       }
    }
    return 0;
}