#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string w;
        cin>>w;
        w[w.size()-2]='i';
        w.pop_back();
        cout<<w<<endl;
    }
    return 0;
}
