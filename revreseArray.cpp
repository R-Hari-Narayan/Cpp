//Reverse an array
#include <iostream>
using namespace std;

void reverseArr(int arr[], int size){
    int i=0;
    int j=size-1;
    int temp;
    while (j> i){
        temp= arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
        i++;
        j--;
    }

}

void printArr(int arr[], int size){
    for (int i=0; i< size; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main(){
    int arr[10]= {0,1,2,3,4,5,6,7,8,9};
    cout << "Initial Array: " << endl;
    printArr(arr,10);
    reverseArr(arr, 10);
    cout << "Array after reverse: " << endl;
    printArr(arr,10);
    return 0;
}