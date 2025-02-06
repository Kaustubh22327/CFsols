#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int neg=0,pos=0,x;
    for(int i=0;i<n;i++) {
        cin>>x;
        if(x<0) neg++;
        else pos++;
    }
    int cnt = 0;
            while(pos<neg){
                 pos++;
                 neg--;
                 cnt++;
            }
            if(neg%2!=0) {
                if(pos>neg) {
                    neg++;
                    pos--;
                }else {
                    neg--;
                    pos++;
                }
                cnt++;
            }
        cout<<cnt<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) solve();
}