#include <bits/stdc++.h>
using namespace std;
int  main() {
   long long  n;
   cin>>n;
   vector<long long>vt(n);
   for(long long  i=0;i<n;i++){
    cin>>vt[i];
   }
   cout<<abs(vt[0]-vt[1])<<" "<<abs(vt[0]-vt[n-1])<<endl;
   for(long long  i=1;i<n-1;i++){
            long long  curr=vt[i];
            long long  next=vt[i+1];
            long long  prev=vt[i-1];
            long long  mini=min(abs(next-curr),abs(curr-prev));
            long long  maxi=max(vt[n-1]-curr,abs(curr-vt[0]));
            cout<<mini<<" "<<maxi<<endl;
   }
   cout<<abs(vt[n-1]-vt[n-2])<<" "<<abs(vt[n-1]-vt[0]) <<endl;
   
}
