    #include<bits/stdc++.h>
    using namespace std;

    int main() {
        int t;
        cin >> t;
        while (t--) {
            int n, k, x;
            cin >> n >> k >> x;

            if (x != 1) {
                cout << "YES" << endl;
                cout << n << endl;
                for (int i = 0; i < n; i++) {
                    cout << 1 << " ";
                }
                cout << endl;
                continue;
            }

        if(n==2 && k==2 && x==1){
            cout<<"YES"<<endl;
            cout<<1<<endl;
            cout<<2<<endl;
            continue;
        }

        if(x==1 && k==1){
            cout<<"NO"<<endl;
            
            continue;
        }


        vector<int> ans;
        bool p=true;
        int a= 0;
            if (x == 1) {
                if(k<=2 && n%2==1){
                    cout<<"NO"<<endl;
                    continue;
                }
                int sum = n;
                // if(n%2==0)a+=n/2;
               
                while(sum>0){
                    if(sum==3){
                        ans.push_back(3);
                        sum-=3;
                    }
                    if(sum>=2)ans.push_back(2);
                    sum-=2;
                }
               
                    cout << "YES" << endl;
                   cout<<ans.size()<<endl;
               
                    for(const auto i:ans){
                        cout<<i<<" ";
                    }
                    cout<<endl;
                    
                    
                } 
            }
        }
        