#include <bits/stdc++.h>
using namespace std;
int main() {
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    int maximum=max({x1,x2,x3,x4});
    vector<int> values={x1,x2,x3,x4};
    for(int num:values){
        if (num !=maximum){
            cout<<maximum-num<<" ";
        }
    }
    
    cout<<endl;
    return 0;
}
