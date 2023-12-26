//Program to sort a stack

#include <iostream>
#include <stack>
using namespace std;

void insertInSortedStack(stack<int> &S, int data){
    if (S.empty() || S.top()< data){
        S.push(data);
        return;
    }

    int num= S.top();
    S.pop();
    insertInSortedStack(S, data);
    S.push(num);
    return;
}

void sort(stack<int> &S){
    if (S.empty()){
        return;
    }

    int num= S.top();
    S.pop();
    sort(S);
    insertInSortedStack(S, num);
}

void print(stack<int> S){
    while(S.empty()== false){
        cout<< S.top()<< endl;
        S.pop();
    }
}

int main(){
    stack<int> Stack;
    Stack.push(7);
    Stack.push(4);
    Stack.push(5);
    Stack.push(2);
    print(Stack);
    sort(Stack);
    cout<< endl;
    print(Stack);
    return 0;
}