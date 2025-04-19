//
// Created by laura on 19/04/2025.
//
#include <bits/stdc++.h>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int max = candies[0];
    int n= candies.size();
    for(int i=0; i<n;++i){
        if(max < candies[i]) max = candies[i];
    }
    vector<bool> v;
    for(int i=0;i<n;++i){
        if((candies[i]+extraCandies) == max || (candies[i]+extraCandies) > max){
            v.push_back(true);
        }
        else v.push_back(false);
    }
    return v;
}

int main() {
    vector<int> candies = {1,2,3,4};
    kidsWithCandies(candies, 1);
}