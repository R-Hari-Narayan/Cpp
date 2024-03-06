//LeetCode problem 1750: Minimum length of string after deleting similar ends

#include <iostream>
using namespace std;

int minimumLength(string s) {
    int len= s.length();
    if (len== 0){
        return 0;
    }
    int start= 0;
    int end= len-1;
    while (s[start]== s[end] && start!= end){
        char ch= s[start];
        while (s[start]== ch && start< len){
            start++;
        }
        while (s[end]== ch && end> 0 && end> start){
            end--;
        }
    }
    return end-start+1;
}

int main(){
    string s= "aabccabba";
    int output= minimumLength(s);
    cout<< output<< endl;
    return 0;
}