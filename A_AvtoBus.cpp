#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if (n%2==1||n<4){
            cout<<-1<<endl;
            continue;
        }
        if(n<8){
            if(n==4||n==6){
                cout<<"1 1"<<endl;
               }
	        else{
                cout<<"-1"<<endl;
            }
            continue;
        }
        long long mini=n/6;
        if (n % 6 == 2){
            mini=mini+1;
        }
        if(n%6==4){
            mini++;
        }
        long long maxi=n/4;
        cout<<mini<<" "<<maxi<<"\n";
    }
    
    return 0;
}
