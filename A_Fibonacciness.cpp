#include<bits/stdc++.h>
using namespace std;
int helper(int a1,int a2,int a3,int a4,int a5){
    int count=0;
    if(a3==a1+a2){
        count++;
    }
    if(a4==a2+a3){
        count++;
    }
    if(a5==a3+a4){
        count++;
    }
    return count;
}
void solve(){
    int t;
    cin>>t;
    vector<int>results;
    while(t--){
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        int ans=0;
        int a3=a1+a2;
        ans=max(ans,helper(a1,a2,a3,a4,a5));
        a3=a4-a2;
        ans=max(ans,helper(a1,a2,a3,a4,a5));
        a3=a5-a4;
        ans=max(ans,helper(a1,a2,a3,a4,a5));
        
        results.push_back(ans);
    }
    for(int res:results){
        cout<<res<<"\n";
    }
}
int main(){
    solve();
    return 0;
}
