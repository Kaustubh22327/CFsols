#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int maxjoy=INT_MIN;
    for(int i=0;i<n;i++){
        int f,t;
        cin>>f>>t;
        int currjoy=0;
        if(t>k){
            currjoy=f-(t-k);
        }
        else{
            currjoy=f;
        }
        maxjoy=max(maxjoy,currjoy);

    }
    cout<<maxjoy<<endl;
}