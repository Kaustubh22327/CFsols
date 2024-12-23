#include <iostream>
#include <string>
using namespace std;
char toLowercase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    for (size_t i = 0; i < str1.length(); i++) {
        int norm1 = toLowercase(str1[i]);
        int norm2 = toLowercase(str2[i]);
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
