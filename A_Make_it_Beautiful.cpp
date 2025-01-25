#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int>a(n);
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       if(count(a.begin(),a.end(),a[0])==n){
           cout<<"NO"<<endl;
           continue;
       }
       cout<<"YES"<<endl;
       sort(a.begin(),a.end());
       vector<int>res(n);
       int left=0,right=n-1;
       for(int i=0;i<n;i++){
           if(i%2==0){
               res[i]=a[left++];
           }
           else{
               res[i]=a[right--];
           }
       }
       for(int i=0;i<n;i++){
           cout<<res[i]<<" ";
       }
       cout<<endl;
   }
   return 0;
}