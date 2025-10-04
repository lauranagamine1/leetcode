//
// Created by laura on 4/10/2025.
//
#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> c;
int major(const vector<int>& nums, int i, int j){
    int n = nums.size();
    if(i == j) {
        c[nums[i-1]]++;
        return nums[i-1];
    }
    int mid = (i+j-1)/2; // piso n/2

    // divide
    int x1 = major(nums,i, mid);
    int x2 = major(nums,mid+1,j);

    int max = -INT_MAX;
    int index= -INT_MAX;
    for(auto k : c){
        if(k.second > max) {
            max = k.second;
            index = k.first;
        }
    }
    return index;
}

int majorityElement(const vector<int>& nums) {
    return major(nums, 1, nums.size());
}

int main() {
    vector<int> nums = {1,1,2,2,2};

    cout<<majorityElement(nums);
}