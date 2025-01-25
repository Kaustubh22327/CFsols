#include<bits/stdc++.h>
using namespace std;
int main(){
   long long t;
   cin>>t;
   while(t--){
       long long n;
       cin>>n;
       vector<long long>arr(n);
       vector<long long>prefix(n);
       vector<long long>suffix(n);
       for(long long i=0;i<n;i++){
           cin>>arr[i];
       }
       prefix[0]=arr[0];
       for(long long i=1;i<n;i++){
           prefix[i]=prefix[i-1]*arr[i];
       }
       suffix[n-1]=arr[n-1];
       for(long long i=n-2;i>=0;i--){
           suffix[i]=suffix[i+1]*arr[i];
       }
       long long answer=-1;
       for(long long i=0;i<n-1;i++){
           if(prefix[i]==suffix[i+1]){
               answer=i+1;
               break;
           }
       }
       cout<<answer<<endl;
   }
   return 0;
}