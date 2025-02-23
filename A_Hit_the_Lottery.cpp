#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans=0;
    ans=ans+n/100;
    n=n%100;
    ans=ans+n/20;
    n=n%20;
    ans=ans+n/10;
    n=n%10;
    ans=ans+n/5;
    n=n%5;
    ans=ans+n/1;
    n=n%1;
    cout<<ans;
}


