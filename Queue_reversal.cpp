//Program to reverse a queue (CodeHelp by Babbar)

#include <iostream>
#include <queue>
using namespace std;

void reverse(queue<int> &q){
    if (q.empty()){
        return;
    }
    int num= q.front();
    q.pop();
    reverse(q);
    q.push(num);
}

void printQ(queue<int> q){
    while(q.empty()== false){
        cout<< q.front()<< " ";
        q.pop();
    }
    cout<< endl << endl;
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<< "Input: ";
    printQ(q);

    reverse(q);

    cout<< "Output:";
    printQ(q);

    return 0;
}