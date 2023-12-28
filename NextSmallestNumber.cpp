//Next smallest number  (CodeHelp by Babbar)

#include <iostream>
#include <stack>
using namespace std;

void nextSmallest(int* input, int n, int* output){
    for (int i= 0; i< n; i++){
        output[i]= -1;
        for (int j= i+1; j< n; j++){
            if(input[i]> input[j]){
                output[i]= input[j];
                break;
            }
        }
    }
}

void nextSmallest2(int* input, int n, int* output){
    stack<int> stk;
    stk.push(-1);
    for (int i=n-1; i>= 0; i--){
        while(input[i]<= stk.top()){
            stk.pop();
        }
        output[i]= stk.top();
        stk.push(input[i]);
    }
}

int main(){
    int n= 4;
    int arr[n]= {2,1,4,3};
    int output[n];
    nextSmallest(arr, n, output);
    for (int i= 0; i< n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    for (int i= 0; i< n; i++){
        cout<< output[i]<< " ";
    }
    cout<< endl;
    int arr2[n]= {5,7,1,4};
    nextSmallest2(arr2, n, output);
    for (int i= 0; i< n; i++){
        cout<< output[i]<< " ";
    }
    cout<< endl;

    return 0;
}