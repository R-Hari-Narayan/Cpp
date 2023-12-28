// Program to calculate area of largest rectangle in a histogram

#include <iostream>
#include <stack>
using namespace std;

void printArr(int* arr, int n){
    for (int i= 0; i< n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
}

void nextSmaller(int* input, int n, int* output){
    stack<int> stk;
    for (int i= n-1; i>= 0; i--){
        if (stk.empty()== false){
            while(input[stk.top()]>= input[i]){
                stk.pop();
                if (stk.empty()){
                    break;
                }
            }
        }
        
        if (stk.empty()){
            output[i]= n;
        }
        else{
            output[i]= stk.top();
        }
        stk.push(i);
    }
}

void prevSmaller(int* input, int n, int* output){
    stack<int> stk;
    for (int i= 0; i< n; i++){
        if (stk.empty()== false){
            while(input[stk.top()]>= input[i]){
                stk.pop();
                if (stk.empty()){
                    break;
                }
            }
        }
        
        if (stk.empty()){
            output[i]= -1;
        }
        else{
            output[i]= stk.top();
        }
        stk.push(i);
    }
}

int LargestArea(int* height, int n){
    int max= 0;
    int next[n];
    int prev[n];
    nextSmaller(height, n, next);
    prevSmaller(height, n, prev);
    int width;
    int area;
    for (int i= 0; i< n; i++){
        width= next[i]- prev[i]- 1;
        area= height[i]* width;
        if (area> max){
            max= area;
        }
    }
    return max;
}

int main(){
    int n= 6;
    int input[n]= {2,1,5,6,2,3};
    cout<< endl;
    cout<<"Area of largest rectangle in histogram = "<< LargestArea(input, n)<< endl;
    cout<< endl;
    return 0;
}