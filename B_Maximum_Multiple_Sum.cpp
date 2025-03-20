#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int maxi=0;
      int ans=0;
      for(int x=2;x<=n;x++){
        int k=1;
        int currsum=0;
        while(k*x<=n){
            currsum+=k*x;
            k++;
        }
        if(currsum>maxi){
            maxi=currsum;
            ans=x;
        }
      } 
      cout<<ans<<endl;  
    }
    return 0;
}