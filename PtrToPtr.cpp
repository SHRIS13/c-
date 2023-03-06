#include<iostream>
using namespace std;
int main(){
    int i = 10;
    int *p = &i;
    int **q = &p;

    cout << "i = " << i << endl;
    cout << "*p = " << *p << endl;
    cout << "**q = " << **q << endl;
    
    cout<<&i<<endl;
    cout<<&p<<endl;
    cout<<&q<<endl;
    
    cout << "*q = " << *q << endl;
    return 0;
}
