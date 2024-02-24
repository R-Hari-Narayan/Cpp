//LeetCode problem 9: Check palindrome

#include <iostream>
using namespace std;

long long int reverse(long long int n, int* place){
    if (n< 10){
        *place= 1;
        return n;
    }
    long long int last= n% 10;
    cout<< "Last: "<< last<< endl;
    n/= 10;
    cout<< "n: "<< n<< endl;
    n= reverse(n, place);
    *place= *place *10;
    cout<< "Place: "<< *place<< endl;
    cout<< "n:"<<n+(last* *place)<< endl;
    return n+(last* *place);
}

bool isPalindrome(int x) {
    if (x<0){
        return false;
    }
    int place= 0;
    long long int reversed_x= reverse(x, &place);
    cout<<"Reversed x: "<< reversed_x<< endl;
    if (x== reversed_x){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int x= 1234567899;
    if (isPalindrome(x)){
        cout<<x << " is palindrome"<< endl;
    }
    else{
        cout<<x << " is not palindrome"<< endl;
    }
    return 0;
}