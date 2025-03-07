#include<iostream>
using namespace std;
    

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int wrngodd=0,wrngeve=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i%2==0){
             if(arr[i]%2!=0){ 
                wrngodd++;
            }
            }
            else{
                if(arr[i]%2== 0){
                  wrngeve++;
                }
            }
        }
        if(wrngodd==wrngeve){
            cout<<wrngodd<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
