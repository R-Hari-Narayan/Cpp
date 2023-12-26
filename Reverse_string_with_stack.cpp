//Reverse a string using stack

#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverse(string S){
    string reversed_string;
    stack<char> Stack;
    for(char C: S){
        Stack.push(C);
    }
    while(Stack.empty()==false){
        reversed_string+= Stack.top();
        Stack.pop();
    }
    return reversed_string;
}

int main(){
    string input="ABCD";
    cout<< "Input string: "<< input<< endl;
    string output= reverse(input);
    cout<< "Output string: "<< output<< endl;
    return 0;
}