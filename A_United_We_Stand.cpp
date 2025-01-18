#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b;
        vector<int>c;
        b.push_back(a[0]);
        for(int i=1;i<n;i++){
            bool flag=true;
            for(int j=0;j<b.size();j++){
                if(b[j]%a[i]==0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                c.push_back(a[i]);
            }
            else{
                b.push_back(a[i]);
            }
        }
        
        // Check if both arrays are non-empty
        if(b.empty() || c.empty()){
            cout << -1 << "\n";
            continue;
        }
        
        // Print result
        cout << b.size() << " " << c.size() << "\n";
        for(int x : b) cout << x << " ";
        cout << "\n";
        for(int x : c) cout << x << " ";
        cout << "\n";
    }
    return 0;
}