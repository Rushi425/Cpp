#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout <<"Enter character : ";
	cin>>ch;
	
	cout<<(ch >='a' && ch <='z'?"Lowercase":"Uppercase");
}
