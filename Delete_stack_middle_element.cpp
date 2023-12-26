//Program to delete the middle element of a stack

#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int> &S1){
    stack<int> S2;
    int n= S1.size();
    while (S1.size()> (n+1)/2){
        S2.push(S1.top());
        S1.pop();
    }
    S1.pop();
    while (S2.empty()== false){
        S1.push(S2.top());
        S2.pop();
    }
}

void print(stack<int> S){
    while(S.empty()== false){
        cout<< S.top()<< endl;
        S.pop();
    }
}

int main(){
    stack <int> Stack;
    Stack.push(2);
    Stack.push(4);
    Stack.push(6);
    Stack.push(8);
    print(Stack);
    deleteMiddle(Stack);
    cout<< endl;
    print(Stack);
    return 0;
}