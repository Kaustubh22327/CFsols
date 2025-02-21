#include<bits/stdc++.h> 
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int x,y=0;
        cin>>x>>y;
        if(y-x>=2){
            count++;
        }
    }
    cout<<count<<endl;
    
}

