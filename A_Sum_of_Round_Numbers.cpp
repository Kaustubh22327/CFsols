#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vt;
        int po=1;
        while(n >0){
            int ld=n % 10;
            if(ld !=0){
                vt.push_back(ld*po);
            }
            po *=10;
            n /=10;
        }
        cout<<vt.size()<<endl;
        for(int i=0; i<vt.size();i++){
            cout<<vt[i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
