#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,k;
  cin>>n>>k;
  vector<int>vt(n);
  int st=1;
  for(int i=0;i<k;i++){
    vt[i]=st;
    st++;
  }
  int en=n;
  for(int j=k;j<n;j++){
    vt[j]=en;
    en--;
  }
  for(int i=0;i<n;i++){
    cout<<vt[i]<<" ";
  }
  cout<<endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
