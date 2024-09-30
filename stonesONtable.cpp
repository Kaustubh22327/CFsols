#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    int count=0;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count;
}