#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,y,z;
   cin>>x>>y>>z;
   int ans=INT_MAX;
   vector<int>vt={x,y,z};
   for(int i=0;i<3;i++){
    int temp=0;
    for(int j=0;j<3;j++){
        if(i!=j){
            temp=temp+abs(vt[j]-vt[i]);
        }
    }
    ans=min(ans,temp);
   }
   cout<<ans<<endl;
}