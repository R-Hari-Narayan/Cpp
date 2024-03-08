//LeetCode problem 3005: Count elements with maximum frequency

#include <iostream>
#include <vector>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
    int arr[100]= {};
    int len= nums.size();
    for (int i=0; i< len; i++){
        arr[nums[i]-1]++;
    }
    int m= 0;
    int count= 0;
    for (int i=0; i< 100; i++){
        if(arr[i]> m){
            m= arr[i];
            count= m;
        }
        else if (arr[i]== m){
            count+= m;
        }
    }
    cout<< m<< endl;
    return count;
}

int main(){
    vector<int> nums= {1,2,2,3,1,4};
    int output= maxFrequencyElements(nums);
    cout<< output<< endl;
    return 0;
}