#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  unordered_map<char,int>mpp;
  for(int i=0;i<s.length();i++){
    mpp[s[i]]++;
  }
  int ans=0;
  for(auto it:mpp){
    char ch=it.first;
    int time=it.second;
    if(time>=ch-'A'+1){
        ans++;
    }
  }
  cout<<ans<<endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
