#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x=0;
    for (int i=0;i<n;i++){
        string str;
        cin>>str;
        if(str=="X++"||str=="++X"){
            x=x+1;
        }
        else{
            x=x-1;
        }
    }
    cout<<x<< endl;
    return 0;
}