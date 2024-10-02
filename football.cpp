#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 1; 
    char start = s[0]; 
    for(int i = 1; i < s.length(); i++){
        if(s[i] == start){
            count++; 
            if(count >= 7){
                cout << "YES";
                return 0;
            }
        }
        else{
            count = 1; 
            start = s[i]; 
        }
    }
    cout << "NO";
}
