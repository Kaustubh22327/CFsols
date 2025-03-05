#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {   
        long long n;
        cin>>n;
        if(n<=6){
            cout<<15<<endl;
        }
        else if(n%2!=0){ 
            cout<<(long long)((n+1)*2.5)<<endl; 
        }
        else{
            cout<<(long long)(n * 2.5) <<endl;
        }
    }
    return 0;
}
