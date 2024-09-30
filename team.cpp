#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt=0;
    for (int i=0; i<n; i++) {
        int p,v,t;
        cin>>p>>v>>t; 
        int solve = p+v+t;
        if (solve>=2) {
            cnt++;
        }
    }
    cout<<cnt<< endl;
    return 0;
}
