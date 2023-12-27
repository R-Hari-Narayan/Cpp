//Program to find redundant brackets from a valid expression

#include <iostream>
#include <stack>
using namespace std;

bool findRedundantBrackets(string &str){
    stack<char> stk;
    for (char C: str){
        if (C== '(' || C=='+' || C=='-' || C=='*' || C=='/'){
            stk.push(C);
        }
        else if(C==')'){
            if(stk.top()== '('){
                return true;
            }
            else{
                while(stk.top()!= '('){
                    stk.pop();
                }
                stk.pop();
            }
        }
        else{
            continue;
        }
    }
    return false;
}

int main(){
    string input= "(f*(a+b))";
    if(findRedundantBrackets(input)){
        cout<< "Expression contains redundant brackets"<< endl;
    }
    else{
        cout<< "Expression does not contain any redundant brackets"<< endl;
    }
    return 0;
}