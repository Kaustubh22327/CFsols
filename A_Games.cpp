#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int>hcolor;
   vector<int>gcolor;
   for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    hcolor.push_back(x);
    gcolor.push_back(y);
   }
   int ans=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i!=j && hcolor[i]==gcolor[j]){
            ans++;
        }
    }
   }
   cout<<ans<<endl;

}