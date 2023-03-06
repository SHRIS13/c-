#include <iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int num1,num2;
    cin>>num1>>num2;
    cout<<num1+num2<<"\n";
    
    return 0;
}