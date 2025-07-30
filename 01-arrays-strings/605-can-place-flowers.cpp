//
// Created by laura on 23/07/2025.
//
#include <bits/stdc++.h>
using namespace std;
template <typename Container>
void print(const Container& container) {
    auto it = container.begin();
    auto end = container.end();
    while (it != end) {
        cout << *it;
        ++it;
        if (it != end) cout << ", ";
    }
    cout << endl;
}

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    vector<int> f = flowerbed;
    int c = n;

    if(flowerbed.size()==1){ // caso base: 1 elemento
        if(f[0]==0){
            f[0]=1;
            c--;
        }
    }else{
        for (int i=0; i<flowerbed.size();++i){
            if(f[i] == 0){
                if(i == 0){ // primer lugar y es 0
                    if(f[1]==0){
                        f[0] = 1;
                        c--;
                    }
                }
                else if(i == flowerbed.size()-1){ // ultimo indice
                    if(f[i-1] == 0){
                        f[i] = 1;
                        c--;
                    }
                }
                else {
                    if(f[i+1] == 0 && f[i-1] == 0){
                        f[i] = 1;
                        c--;
                    }
                }
            }
        }
    }

    if(c <= 0){
        return true;
    }else{
        return false;
    }
}

int main() {
    vector<int> flowerbed = {1,0,0,0,0,0,1};
    vector<int> f2 = {1,0,1,0,1,0,1};
    vector<int> f3 = {0,0,1,0,1};
    vector<int> c2 = {1,0,0,0,1};
    cout<<canPlaceFlowers(f3, 2)<<endl;

}