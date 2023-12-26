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
        cout<< Stack.top()<< " ";
        reversed_string+= Stack.top();
        Stack.pop();
    }
    cout<<endl << reversed_string<< endl;
    return reversed_string;
}

int main(){
    string input="ABCD";
    string output= reverse(input);
    return 0;
}