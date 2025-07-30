//
// Created by laura on 29/07/2025.
//
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    vector<string> v;
    string c;
    // como un split de python
    for(int i=0; i<s.size();++i){
        if(s[i] != ' '){
            c += s[i];
        }else{
            cout<<c<<endl;
            v.push_back(c);
            c.erase();
        }
    }
    cout<<endl;
    string str;
    // iteramos en orden inverso
    for(auto it = v.end()-1; it != v.begin(); --it){
        str += *it;
        str+=" ";
    }
    str+= *v.begin();
    cout<<str;
    return str;
}
int main() {
    reverseWords("the sky is blue");
}