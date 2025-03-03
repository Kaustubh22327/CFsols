#include<bits/stdc++.h>
using namespace std;
bool solve(int num){
    return(num%3!=0)&&(num%10!=3);
}
int main(){
    int t;
    cin>>t;
    vector<int>vt;
    int num=1;
    while(vt.size()<1500){
        if(solve(num)){
            vt.push_back(num);
        }
        num++;
    }
    while(t--){
        int k;
        cin>>k;
        cout<<vt[k-1]<<endl;
    }
    return 0;
}