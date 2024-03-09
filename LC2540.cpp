//LeetCode problem 2540: Minimum common value

#include <iostream>
#include <vector>
using namespace std;

int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int len1= nums1.size();
    int len2= nums2.size();
    int j= 0;
    for (int i= 0; i< len1; i++){
        while(nums1[i]> nums2[j]){
            j++;
            if (j>= len2){
                cout<< "hi"<< endl;
                return -1;
            }
        }
        if(nums1[i]== nums2[j]){
            return nums1[i];
        }

    }
    cout<< "hello"<< endl;
    return -1;
}

int main(){
    vector<int> nums1= {2,4};
    vector<int> nums2= {1,2};
    int common= getCommon(nums1, nums2);
    cout<< common<< endl;
    return 0;
}