#include<iostream>
using namespace std;
int main(){
    /* int a=10;
    int* aptr;
    aptr=&a;
    cout<<*aptr<<endl;
    *aptr = 20;
    cout<<a<<endl;
    */ 
    int arr[]={1,2,3,4,5};
    cout<<endl<<arr <<"\t";
    cout<<*arr<<endl;

    int *p;
    p=arr;
    for(int i=0;i<5;i++){
        cout<<endl<<*(arr+i)<<endl;
        
        //cout<<endl<<*(p)<<endl;
        p++; //ar++ illegal
    }
   /*  cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;

 */
    return 0;
}