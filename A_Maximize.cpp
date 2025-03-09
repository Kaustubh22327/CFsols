#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(b){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int solve(int x){
    int maxSum=0;
    int by=1;
    for(int y=1;y<x;y++){
        int cs=gcd(x,y)+y;
        if(cs>maxSum) {
            maxSum=cs;
            by=y;
        }
    }
    return by;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x; 
        cout<<solve(x)<<endl;
    }
    return 0;
}