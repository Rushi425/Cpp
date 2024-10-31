#include<iostream>
using namespace std;

int main() {
	
	int size = 5;
	int arr[size] = {1,2,3,4,5};
	int small = INT_MIN;	
	
	for(int i = 0; i < size; i++){
		if(arr[i] > small){
				small = arr[i];
		}
	}
	cout<<small;
	return 0;
}
