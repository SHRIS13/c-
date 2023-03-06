
#include<iostream>
using namespace std;
int main(){

	int a=10;
	int* aptr; //int_pointer
	aptr=&a; //stores address of a "&"


	cout<<&a<<endl; 	//prints address of a 
	cout<<aptr<< "\n\tHello, world, from Visual C++!" << endl; //prints address of a + string
	cout<<*aptr<<endl; //dereference of aptr means prints value of a
		*aptr=100;	//initialise new value of a which is now 100 since *aptr=100
	cout<<a<<endl; //prints new value of a == *aptr ==100

	aptr++;

	cout<<aptr<<endl; //prints address of a+1 which is suppose 2000 then 2000+4

	return 0;}