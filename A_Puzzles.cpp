#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int f[m];

    for(int i=0; i<m; i++) cin >> f[i];

    sort(f, f+m);

    int minDiff=1e9, i=0, j=n-1;
    while(j<m){
        minDiff=min(minDiff, f[j]-f[i]);
        i++;
        j++;
    }

    cout << minDiff << endl;
    return 0;
}
