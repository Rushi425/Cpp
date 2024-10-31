//binary to decimal.
#include<iostream>
#include<cmath>  // Required for pow() function
using namespace std;

int main(){
	int binaryNum = 1111;
	int number = 0;
	int pow = 0;
	
	while(binaryNum > 0)
	{
	    int rem = binaryNum % 10;  // Extract the last digit (bit)
        binaryNum = binaryNum / 10;  // Remove the last digit
		
		if ( rem == 1){
			number += powl(2, pow) ; // Add the value of 2^pow if the bit is 1
		}
		
		pow++; // Increase power for the next bit
	
	}
	
	cout << number; // Output the decimal equivalent
}

