#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
        int k;
        cin>>k;
        int ans=0;
        vector<int>vt(12);
        for(int i=0;i<12;i++){
            cin>>vt[i];
        }
        sort(vt.rbegin(),vt.rend());
        for(int i=0;i<12;i++){
            if(k<=0){
                break;
            }
            k=k-vt[i];
            ans++;
        }
        if(k>0){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
          
    return 0;
}