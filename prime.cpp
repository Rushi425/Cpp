#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter number : ";
	cin >> number;
	bool isprime = true; 
	
	for(int i = 2; i < number; i++)
	{
		if(number % i == 0)
		{
			isprime = false;
			break;
		}	
	}
		if(isprime == true){
			cout <<number<<"is a prime number";
		
		}
		
		else{
			cout << "Number is not prime";
		}

	
}
