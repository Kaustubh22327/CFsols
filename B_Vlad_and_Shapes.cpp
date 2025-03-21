#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<string>vt(n);
      for(int i=0;i<n;i++){
        cin>>vt[i];
      }
      bool istraingle=false;
      for(int c=0;c<n;c++){
        for(int r=0;r<n;r++){
            if(vt[r][c]=='1'){
                if((r==0||vt[r-1][c]!='1') &&(r==n-1||vt[r+1][c]!='1')){
                    istraingle=true;
                    break;
                }
            }
        }
        if(istraingle){
            break;
        }
      }
      if(istraingle){
        cout<<"TRIANGLE"<<endl;
      }
      else{
        cout<<"SQUARE"<<endl;
      }
    }
    return 0;
}
