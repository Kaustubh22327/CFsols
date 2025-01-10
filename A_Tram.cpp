#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maximum=0;
    int currcap=0;
    for(int i=0;i<n;i++){
        int a;
        int b;
        cin>>a>>b;
        currcap=currcap-a+b;
        maximum=max(maximum,currcap);
    }
    cout<<maximum<<endl;
}