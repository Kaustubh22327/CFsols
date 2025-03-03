using namespace std;
#define ll long long

int main()
{
    ll  t;
    cin>>t;
    while(t--){
        ll  n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<ll>vt(n);
        for(ll i=0;i<n;i++){
            cin>>vt[i];
        }
        ll cnt=0;
        bool isfound = false;
        if(min(vt[0]*a,b)>=f){
           continue;
            
        }
        else{
            f=f-min(vt[0]*a,b);
            cnt++;
        }
        for(ll i=1;i<n;i++){
            ll dt = vt[i]-vt[i-1];
            ll  minchoose=min( dt*a , b );
            // if(minchoose<f){
            //     f=f-minchoose;
            //     cnt++;
            // }
            f -= minchoose;
        
            if(f<=0){
                isfound = true;
                break;
            }
            cnt++;
            // else{
            //     cout<<"NO"<<endl;
            //     continue;
            // }
        }
        if(cnt==n){
            cout<<"YES"<<endl;
        }
        
        else{
            cout<<"NO"<<endl;
        }
    }
}

// void solve() {
//     int n,f,a,b;
//     in n;
//     in f;
//     in a;
//     in b;

//     vi m(n+1);
//     m[0] = 0;  

//     f(i,1,n+1) {
//         in m[i];
//     }

//     f(i,1,n+1){
//         int dt = m[i] - m[i-1];  
//         int bc = min(dt * a, b); 

//         f -= bc;  
//         if(f<=0){
//             no();
//             return;
//         }
//     }

//     yes();
// }