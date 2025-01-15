#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;
        for (int i=0;i<n;i++){
            cin >>a[i];
            freq[a[i]]++;
        }
        if(freq.size()>2){
            cout<<"NO"<<endl;
        } else if(freq.size() == 2){
            auto it=freq.begin();
            int count1=it->second;
            it++;
            int count2=it->second;
            if ((n % 2==0 && count1 == count2) || (n % 2 == 1 && (count1 == n / 2 || count2 == n / 2))) {
                cout << "Yes" << endl;
            } 
            else{
                cout << "No" << endl;
            }
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
