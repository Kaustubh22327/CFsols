#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
       vector<vector<int>>vt(3,vector<int>(3));
       vector<vector<int>>result(3,vector<int>(3,1));
       for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
            cin>>vt[i][j];
         }
       }     
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int toggleCount=vt[i][j];
            if(i-1>=0)toggleCount+=vt[i-1][j]; 
            if(i+1<3)toggleCount+=vt[i+1][j]; 
            if(j-1>=0)toggleCount+=vt[i][j-1];
            if(j+1<3)toggleCount+=vt[i][j+1]; 
            if(toggleCount%2!=0){
                result[i][j]=0;
            }
        }
       } 
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<result[i][j];
        }
        cout<<endl;
       }
          
    return 0;
}
