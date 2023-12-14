#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    for(int i=1; i<=10; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    
    return 0;
}