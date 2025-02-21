#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<int>vt(n+1,0);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        vt[x-1]=i;
    }
    for (int i=0; i<n;i++)
    {
        cout<<vt[i]<<" ";
    }
    

    

}
