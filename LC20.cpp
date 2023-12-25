// LeetCode problem20: Valid Parantheses

#include <iostream>
#include <string>
using namespace std;

/*
class stack{
    private:
    //Data members
    char* arr;
    int top;
    int Size;

    public:
    //Constructor
    stack(int s){
        this->Size= s;
        arr= new char[s];
        top= -1;
    }

    //Methods
    void push(int data){
        if(this->Size- top > 1){
            top++;
            arr[top]= data;
        }
        else{
            cout<< "Stack overflow"<< endl;
        }
    }

    void pop(){
        if (isEmpty()){
            cout<< "Stack underflow"<< endl;
        }
        else{
            top--;
        }
    }

    char peek(){
        if (isEmpty()){
            cout<< "Stack is empty"<< endl;
            return '!';
        }
        else{
            return arr[this->top];
        }
    }

    bool isEmpty(){
        if (top< 0){
            return true;
        }
        else{
            return false;
        }
    }

    int size(){
        return this->Size;
    }
};

bool isValid(string s){
    int n= s.length();
    stack Stack(n);
    for (int i= 0; i< n; i++){
        if (Stack.isEmpty()){
            Stack.push(s[i]);
        }
        else if((Stack.peek()=='(' && s[i]== ')') || 
                (Stack.peek()=='[' && s[i]== ']') || 
                (Stack.peek()=='{' && s[i]== '}'))
            {
                Stack.pop();
            }
        else{
            Stack.push(s[i]);
        }
    }
    if (Stack.isEmpty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    string input= "([{])}";
    if (isValid(input)){
        cout<< "String is valid"<< endl;
    }
    else{
        cout<< "String is invalid"<< endl;
    }
    return 0;
}
*/

//Using STL stack class
#include <stack>

bool isValid(string s){
    int n= s.length();
    stack <char> Stack;
    for (int i= 0; i< n; i++){
        if (Stack.empty()){
            Stack.push(s[i]);
        }
        else if ((Stack.top()=='(' && s[i]==')') ||
            (Stack.top()=='[' && s[i]==']') ||
            (Stack.top()=='{' && s[i]=='}')){
                Stack.pop();
            }
        else{
            Stack.push(s[i]);
        }
    }
    if (Stack.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    string input= "([])";
    if (isValid(input)){
        cout<< "String is valid"<< endl;
    }
    else{
        cout<< "String is invalid"<< endl;
    }
    return 0;
}
