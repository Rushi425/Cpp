#include<iostream>
using namespace std;
int main(){
	int arr[] = {3, -4, 5, 4, -1, 7, -8 };
	int size = 7;
	
	int currentSum = 0;
	int maxSum = INT_MIN;
	
	for(int i = 0; i < size; i++){
		currentSum += arr[i];
		maxSum = max(currentSum, maxSum);
		
		if(currentSum < 0){
			currentSum = 0;
		} 
	}
	
	cout<<"MAXIMUM SUM OF SUBARRY IS : "<<maxSum<<endl;
	return 0;
}
