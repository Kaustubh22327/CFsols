#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       int evenatoddidx=0;
       int oddatoddidx=0;
       int oddatevenidx=0;
       int evenatevenidx=0;
       for(int i=0;i<n;i+=2){
            if(a[i]%2==0){
                evenatevenidx++;
            }
            else{
                oddatevenidx++;
            }
       }
       for(int i=1;i<n;i+=2){
            if(a[i]%2==0){
                evenatoddidx++;
            }
            else{
                oddatoddidx++;
            }
        }
        if((evenatevenidx!=0 && oddatevenidx!=0)||oddatoddidx!=0 && evenatoddidx!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}

