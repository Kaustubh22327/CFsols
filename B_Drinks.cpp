#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n; 
    double totalPercentage=0.0;
    for(int i=0;i<n;i++) {
        int pi;
        cin >> pi;
        totalPercentage+=pi;
    }
    double result=totalPercentage / n;
    cout<<fixed<<setprecision(12)<<result<<endl;

    return 0;
}
