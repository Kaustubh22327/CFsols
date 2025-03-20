#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
      vector<int>ans;
      vector<string>inp(n);
      for(int i=0;i<n;i++){
        cin>>inp[i];
      }
      for(int i=n-1;i>=0;i--){
        for(int j=0;j<4;j++){
            if(inp[i][j]=='#'){
                ans.push_back(j+1);
            }
        }
      }
      for(int i=0;i<n;i++){
        cout<<ans[i]<<" " ;
    }
    cout<<endl;
      
    }
    return 0;
}