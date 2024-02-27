//LeetCode problem 26: Remove duplicates from sorted array

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int len= nums.size();
    if (len== 0 || len== 1){
        return len;
    }
    int k=1;                //Unique elements
    int val= nums[0];
    for (int i=1; i< len; i++){
        if (nums[i]!= val){
            nums[k]= nums[i];
            val= nums[i];
            k++;
        }
    }
    return k;
}

int main(){
    vector<int> nums= {1,1,1,2,2,3};
    int n= removeDuplicates(nums);
    for (int i= 0; i< n; i++){
        cout<< nums[i]<<" ";
    }cout<< endl;
    return 0;
}