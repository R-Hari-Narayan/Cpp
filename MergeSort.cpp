// Program to perform merge sort on an array

#include <iostream>
using namespace std;

void merge(int* arr, int l, int r){
    int mid= (l+r)/2;

    int len1= mid-l+1;
    int len2= r-mid;

    //Creating new arrays
    int* left= new int[len1];
    int* right= new int[len2];

    //Initializing index to traverse arrays
    int mainArrIndex= l;
    int left_index= 0;
    int right_index= 0;

    //Copying values to new array
    for (left_index= 0; left_index< len1; left_index++){
        left[left_index]= arr[mainArrIndex];
        mainArrIndex++;
    }

    mainArrIndex= mid+1;
    for (right_index=0; right_index< len2; right_index++){
        right[right_index]= arr[mainArrIndex];
        mainArrIndex++;
    }

    //Merging left and right arrays into main array
    mainArrIndex= l;
    left_index= 0;
    right_index= 0;
    while(left_index< len1 && right_index< len2){
        if(left[left_index]<= right[right_index]){
            arr[mainArrIndex]= left[left_index];
            mainArrIndex++;
            left_index++;
        }
        else{
            arr[mainArrIndex]= right[right_index];
            mainArrIndex++;
            right_index++;
        }
    }

    if (mainArrIndex<= r){
        if (left_index< len1){
            while(left_index< len1){
                arr[mainArrIndex]= left[left_index];
                mainArrIndex++;
                left_index++;
            }
        }
        else{
            while(right_index< len2){
                arr[mainArrIndex]= right[right_index];
                mainArrIndex++;
                right_index++;
            }
        }
    }

}

void mergeSort(int* arr, int l, int r){
    if (l== r){
        return;
    }
    int mid= (l+r)/2;
    cout<< "L= "<< l<< " R= "<< r<< " mid= "<< mid<< endl;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    
    merge(arr, l, r);
    for(int i=l; i<= r; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;

}

int main(){
    int arr[10]= {9,8,7,6,5,4,3,2,1,0};
    mergeSort(arr, 0, 9);
    for (int i=0; i< 10; i++){
        cout<< arr[i]<< endl;
    }
    return 0;
}