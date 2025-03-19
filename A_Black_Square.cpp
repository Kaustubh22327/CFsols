#include <bits/stdc++.h>
using namespace std;
#include <string>
int main(){
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int tc=0;
    for(char c:s){
        if(c=='1'){
            tc+=a1;
        }
        else if(c=='2'){
            tc+=a2;
        }
        else if(c=='3'){
            tc+=a3;
        }
        else if(c=='4'){
            tc+=a4;
        }
    }
    cout<<tc<<endl;
    return 0;
}