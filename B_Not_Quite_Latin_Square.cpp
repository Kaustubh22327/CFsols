#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
    int cnta=0,cntb=0,cntc=0;
    for(int i=0;i<9;i++){
        char c;
        cin>>c;
        if(c =='A'){
            cnta++;
        }
        if(c=='B'){
            cntb++;
        }
        if(c=='C'){
            cntc++;
        }    
    }
    if(cnta<3)cout<<"A"<<endl;
    if(cntb<3)cout<<"B"<<endl;
    if(cntc<3)cout<<"C"<<endl;
    }
    return 0;
}
