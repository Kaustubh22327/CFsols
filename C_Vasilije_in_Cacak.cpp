// #include <iostream>
// #include <vector>
// using namespace std;

// string solve(int n,int k,long long x){
//     long long mps=(long long)n*(n+1)/2;
//     if(x>mps)return "NO";
//     if(x==mps&&x!=n)return "NO";
//     long long fks=(long long)k*(k+1)/2;
//     if(x<fks)return "NO";
//     return "YES";
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         long long x;
//         cin>>n>>k>>x;
//         cout<<solve(n,k,x)<<endl;
//     }
    
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

string solve_problem(int n,int k,long long x){
    long long mps=(long long)n*(n+1)/2;
    if(x>mps)return "NO";
    if(x==mps&&k!=n)return "NO";
    long long fks=(long long)k*(k+1)/2;
    long long last_n_min_k_sum=(long long)(n+n-k+1)*k/2;
    if(x<fks)return "NO";
    if(x>last_n_min_k_sum)return "NO";
    return "YES";
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        long long x;
        cin>>n>>k>>x;
        
        cout<<solve_problem(n,k,x)<<endl;
    }
    
    return 0;
}