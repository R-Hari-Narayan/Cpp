//Program to insert element at the bottom of stack

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &S, int data){
    if (S.empty()){
        S.push(data);
        return;
    }
    else{
        int num= S.top();
        S.pop();
        insertAtBottom(S, data);
        S.push(num);
        return;
    }
}

void print(stack<int> S){
    while(S.empty()== false){
        cout<< S.top()<< endl;
        S.pop();
    }
}

int main(){
    stack<int> Stack;
    Stack.push(2);
    Stack.push(3);
    Stack.push(4);
    print(Stack);
    insertAtBottom(Stack, 1);
    cout<< endl;
    print(Stack);
    return 0;
}