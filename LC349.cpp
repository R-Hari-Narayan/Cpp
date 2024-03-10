//LeetCode problem 349: Intersection of two arrays

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> output;
    int j= 0;
    for (int i= 0; i< nums1.size(); i++){
        while(nums2[j]< nums1[i]){
            j++;
            if (j>= nums2.size()){
                return output;
            }
        }
        if (nums2[j]== nums1[i] && (output.size()== 0 || output.back()!= nums2[j])){
            output.push_back(nums2[j]);
        }
    }
    return output;
}

int main(){
    vector<int> nums1= {1,2,2,1};
    vector<int> nums2= {2,2};
    vector<int> output= intersection(nums1, nums2);
    for(auto x: output){
        cout<< x<< " ";
    }cout<< endl;
    return 0;
}