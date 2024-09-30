#include <iostream>
#include <string>
using namespace std;
int normalizeChar(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c-'A'; 
    } 
    else {
        return c-'a'+26; 
    }
}
int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    for (size_t i = 0; i < str1.length(); i++) {
        int norm1 = normalizeChar(str1[i]);
        int norm2 = normalizeChar(str2[i]);
        if (norm1 < norm2) {
            cout << "-1" << endl; 
            return 0;
        } else if (norm1 > norm2) {
            cout << "1" << endl; 
            return 0;
        }
    }
    cout<<"0"<<endl;
    return 0;
}
