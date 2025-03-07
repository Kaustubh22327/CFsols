#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int sum=0;
   int ans=0;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x!=-1){
        sum+=x;
    }
    if(x==-1){
        if(sum<=0){
            sum--;
            ans++;
            sum=0;
        }
        else{
            sum--;
        }
    }
   }
   cout<<ans<<endl;
}