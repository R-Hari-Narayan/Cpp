//LeetCode problem 27: Remove Element

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int len= nums.size();
    if (len== 0){
        return 0;
    }
    int k= 0;  //Count, no of element not equal to val
    for (int i= 0; i< len; i++){
        if (nums[i]!= val){
            nums[k]= nums[i];
            k++;
        }
    }
    return k;
}

int main(){
    vector<int> nums= {3,2,2,3};
    int val= 3;
    int n= removeElement(nums, val);
    for (int i= 0; i< n; i++){
        cout<< nums[i]<< " ";
    }cout<< endl;
    return 0;
}