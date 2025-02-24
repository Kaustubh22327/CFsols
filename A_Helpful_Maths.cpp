#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ones=0,twos= 0,threes= 0;
    for (char ch : s){
        if(ch =='1'){ 
            ones++; 
        }
        else if(ch == '2'){ 
            twos++; 
        }
        else if (ch == '3'){
             threes++; 
        }
    }
    string res;
    while (ones>0){
        res+="1";
        ones--;
        if (ones>0||twos>0||threes>0){
            res += "+"; 
        }
    }
    while(twos>0){
        res+="2";
        twos--;
        if (twos>0||threes>0){
            res += "+";
        }
    }
    while (threes > 0){
        res += "3";
        threes--;
        if (threes > 0){
             res += "+";
        }
    }

    cout << res << endl;
    return 0;
}
