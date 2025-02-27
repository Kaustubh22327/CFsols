#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int reds,blues=0;
        vector<string>vt(8);
        for(long i = 0; i< 8; p++){
            cin>>vt[p];

        }
        for(auto str:vt){
            for(int i=0;i<8;i++){
                if(str[i]=='R'){
                    reds++;
                }
                else{
                    if(str[i]=='B'){
                        blues++;
                    }
                }
            }
        }
        if(blues>reds){
            cout<<"B"<<endl;
        }
        else{
            cout<<"R"<<endl;
        }
        

    }
    return 0;
}