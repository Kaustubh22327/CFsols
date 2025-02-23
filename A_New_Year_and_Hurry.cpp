#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int left=240-k;
    int prob=1;
    int count=0;
    while(left>=5*prob && count<n){
        left=left-5*prob;
        prob++;
        count++;
    }
    cout<<count;
}
