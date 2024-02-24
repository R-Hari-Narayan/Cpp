// LeetCode problem 13: Roman to integer

#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s){
    int len= s.length();
    unordered_map<char, int> umap;
    umap['I']= 1;
    umap['V']= 5;
    umap['X']= 10;
    umap['L']= 50;
    umap['C']= 100;
    umap['D']= 500;
    umap['M']= 1000;
    int sum= 0;
    int prev= 0;
    for (int i= len-1; i>= 0; i--){
        int curr= umap[s[i]];
        if (prev <= curr){
            sum+= curr;
        }
        else{
            sum-= curr;
        }
        prev= curr;
    }
    return sum;
}

int main(){
    string s= "XLIX";
    int i= romanToInt(s);
    cout<< i<< endl;
    return 0;
}