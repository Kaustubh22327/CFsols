#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.length()<=10){
            cout<<s<<endl;
        }
        
        else{
            string news=s;
            news = s[0]+to_string(s.length() - 2)+s[s.length()-1];
            cout<<news<<endl;
        }
    }
}