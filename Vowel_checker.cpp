#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    char alphabet;
    cin>>alphabet;
    cout<<alphabet<<endl;

    if (alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' ){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }

    return 0;
}