#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                x++;
            }
        }
        int y=n-x;
        cout<<abs(y-x)<<endl;        
          
    return 0;
}