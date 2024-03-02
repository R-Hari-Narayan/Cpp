//LeetCode problem 977: Squares of a sorted array

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int len= nums.size();
    for (int i=0; i< len; i++){
        nums[i]= nums[i]* nums[i];
    }
    sort(nums.begin(), nums.end());
    return nums;
}

int main(){
    vector<int> nums= {-7, -3, 2, 3, 11};
    vector<int> output= sortedSquares(nums);
    for(int element: output){
        cout<< element<< " ";
    }cout<< endl;
    return 0;
}