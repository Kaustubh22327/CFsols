#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int faishon=min(a,b);
    int regular=(max(a,b)-faishon)/2;
    cout<<faishon<<" "<<regular;
}