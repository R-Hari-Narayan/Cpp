//LeetCode problem 2864: Maximum odd binary number

#include <iostream>
using namespace std;

string maximumOddBinaryNumber(string s) {
    int len= s.length();
    int count= 0;
    for (int i= 0; i< len; i++){
        if (s[i]== '1'){
            count++;
        }
    }
    string output(len-1, '0');
    for(int i= 0; i< count-1; i++){
        output[i]= '1';
    }
    output.append("1");
    return output;
}

int main(){
    string s= "0101";
    string output= maximumOddBinaryNumber(s);
    cout<< "Output: "<< output<< endl;
    return 0;
}