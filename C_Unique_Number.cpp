#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int sum=x;
        string num="";
        for(int i=9;i>0;i--){
            if(sum <=0){
                break;
            }
            if(sum>=i){
                sum=sum - i;
                num=to_string(i) + num;
            }
        }
        if(sum!=0){
            cout<<-1<<endl;
        }
        else{
            cout<<num<<endl;
        }
    }
    return 0;
}
