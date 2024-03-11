//LeetCode problem 791: Custom sort string

#include <iostream>
using namespace std;

string customSortString(string order, string s) {
    int len= order.size();
    string result= "";
    for (int i= 0; i< len; i++){
        cout<< i<< endl;
        char ch= order[i];
        int j= 0;
        while(j< s.size()){
            cout<< j<< endl;
            if (s[j]== ch){
                result.push_back(s[j]);
                s.erase(j, 1);
                j--;
            }
            cout<< result<< endl;
            cout<< s<< endl;
            j++;
        }
    }
    result= result + s;
    return result;
}

int main() {
    string order= "kqep";
    string s= "pekeq";
    string output= customSortString(order, s);
    cout<< output<< endl;
    return 0;
}