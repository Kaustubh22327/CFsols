#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n=s.size(), firstWord=1;

    for(int i=0; i<n;){
        if(i+2<n && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') i+=3;
        else{
            if(!firstWord) cout << " ";
            while(i<n && !(i+2<n && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')) cout << s[i++];
            firstWord=0;
        }
    }

    cout << endl;
    return 0;
}
