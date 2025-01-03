//
// Created by laura on 25/12/2024.
//
#include <bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2) {
    int n;
    bool b;
    if(word1.size()>word2.size()){
        n = word1.size();
        b = true;
    } else{
        n = word2.size();
        b = false;
    }

    int contador=0;
    string s;
    if (b){ // word1 es mayor
        for(int i=0; i<n; ++i){
            s.push_back(word1[i]);
            if(contador < word2.size()){
                s.push_back(word2[i]);
                contador++;
            }

        }
    } else{
        for(int i=0; i<n; ++i){
            if(contador < word1.size()){
                s.push_back(word1[i]);
                contador++;
            }
            s.push_back(word2[i]);
        }
    }

    return s;
}

int main() {
    mergeAlternately("ab", "pqrs");
    return 0;
}