//LeetCode problem 28: Find the index of the first occurence in a string

#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {
    int len1= haystack.length();
    int len2= needle.length();
    if (len2> len1){
        return -1;
    }
    int j= 0;
    int index= -1;
    for (int i= 0; i< len1;i++){
        if (haystack[i]== needle[j]){
            if(j==0){
                index= i;
            }
            j++;
            if (j== len2){
                return i- (len2- 1);
            }
        }
        else{
            j= 0;
            if (index!= -1){
                i= index;
                index= -1;
            }
        }
    }
    index= -1;
    return index;
}

int main(){
    string haystack= "mississippi";
    string needle= "pi";
    int n= strStr(haystack, needle);
    cout<< "Occurence index: "<< n<< endl;
    return 0;
}