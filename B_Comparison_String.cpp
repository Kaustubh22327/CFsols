    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        long long t;
        cin>>t;
        while(t--){
            long long n;
            cin>>n;
            string s;
            cin>>s;
            int lesser=1;
            int maxlesser=1;
            int maxgreater=1;
            int greater=1;
            for(int i=0;i<n;i++){
                if(s[i]=='<' && s[i+1]=='<' || s[i]=='>' && s[i+1]=='>'){
                    lesser++;
                    greater++;
                    maxlesser=max(maxlesser,lesser);
                    maxgreater=max(maxgreater,greater);       
                }
                else{
                    lesser=1;
                    greater=1;
                }
            }
            cout<<max(maxgreater,maxlesser)+1<<endl;
        
        }
    }