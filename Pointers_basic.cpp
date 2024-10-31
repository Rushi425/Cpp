#include<iostream>
using namespace std;
int main(){
	int a = 10;
	cout<<"The address of a is  "<<&a<<endl;
	
	int * ptr = &a;
	cout<<"The value of pointer is "<<&ptr<<endl;
	
	//pointer to pointers
	int **ptr2 = &ptr;
	cout<<"The value of pointer2 is "<<ptr2;
	
	return 0;	
}
