#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,d;
   cin>>n>>d;
   int s=0;
   for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s+=x;
   }
   int mintime=s+((n-1)*10);
   if(mintime>d){
    cout<<-1<<endl;
   }
   else{
    int left=d-s;
    cout<<left/5<<endl;
   }
}