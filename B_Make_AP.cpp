#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long a,b,c;
	cin>>a>>b>>c;
	bool yes=false;
	if((2*b-c)%a==0)
		if((2*b-c)/a>0){
			yes=true;
		}
	if((c+a)%(2*b)==0){
		yes=true;
	}
	if((2*b-a)%c==0){
		if((2*b-a)/c>0){
			yes=true;
		}
	}
	if(a==b&&b==c)
		yes=true;
	if(yes)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
