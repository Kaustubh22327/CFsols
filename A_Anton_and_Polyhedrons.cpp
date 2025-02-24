#include<iostream>
using namespace std;
int main() {
    int n, faces = 0;
    cin >> n;
    string s;
    while (n--){
        cin >> s;
        if (s =="Tetrahedron"){ 
            faces+=4;
        }
        else if(s =="Cube"){ 
            faces+=6;
        }
        else if(s =="Octahedron"){
            faces+=8;
        }
        else if(s =="Dodecahedron"){
            faces+=12;
        }
        else if(s == "Icosahedron"){
            faces+=20;
        }
    cout<<faces<<endl;
    return 0;
}
