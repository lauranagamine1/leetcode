//
// Created by laura on 30/07/2025.
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

void moveZeroes(vector<int>& nums) {
    auto it = nums.begin();
    int n = nums.size();
    int i = 0;
    if(n > 1){
        while(i < n){
            ++i;
            if(*it == 0){
                nums.erase(it);
                nums.push_back(0);
            }else{
                ++it;
            }

        }
    }
}


int main() {
    vector<int> nums = {2,1};
    auto i = nums.end()-1; // end
    cout<<*i<<endl;

    moveZeroes(nums);
    print(nums);

}