#include<iostream>
using namespace std;
int main(){
	int a = 10;
	int *ptr= &a;
	int **ptr2 = &ptr;
	
	cout<<*(ptr2)<<endl;

	
//	cout<<"address of a "<<&a<<endl;
//	cout<<"address of a "<<ptr<<endl;
//	
//	int **ptr2 = &ptr;
//	cout<<"address of ptr "<<&ptr<<endl;
//	cout<<"address of ptr "<<ptr2<<endl;
	
	
	return 0;
}
