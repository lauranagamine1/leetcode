//
// Created by laura on 29/07/2025.
//
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    vector<string> v;
    string c;
    // como un split de python
    int i=0;
    while(i<s.size()){
        while(s[i] != ' '){
            if(i == s.size()){
                break;
            }
            c += s[i];
            ++i;
        }
        if(!c.empty()){
            cout<<i<<":"<<c<<endl;
            v.push_back(c);
            c.erase();
        }
        if(i == s.size()) break;

        while(s[i] == ' '){
            ++i;
        }

    }

    string str;
    // iteramos en orden inverso
    for(auto it = v.end()-1; it != v.begin(); --it){
        str += *it;
        str+=" ";
    }
    str+= *v.begin();
    cout<<"->"<<str;
    return str;
}

int main() {
    cout<<endl;
    string s1 = "   hello  world  ";
    string s2 = "the sky is blue";
    reverseWords(s1);
}