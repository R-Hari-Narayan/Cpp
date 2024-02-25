// LeetCode problem 14: Longest common prefix

#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    string prefix= "";
    int len= strs.size();
    int min= 200;
    for(int i= 0; i< len; i++){
        int l= strs[i].length();
        if (l< min){
            min= l;
        }
    }
    for (int i= 0; i< min; i++){
        char ch= strs[0][i];
        for (int j= 0; j< len; j++){
            if (strs[j][i]!= ch){
                return prefix;
            }
        }
        prefix.push_back(ch);
    }
    return prefix;
}

int main(){
    vector<string> strs= {"dog", "racecar", "flight"};
    string ouput= longestCommonPrefix(strs);
    cout<< ouput<< endl;
    return 1;
}