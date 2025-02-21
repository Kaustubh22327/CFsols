#include<bits/stdc++.h> 
using namespace std;
int main() {
    set<int>st;
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    st.insert(s1);
    st.insert(s2);
    st.insert(s3);
    st.insert(s4);
    cout<<4-st.size()<<endl;
    
}

