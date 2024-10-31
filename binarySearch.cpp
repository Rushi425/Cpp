#include<iostream>
using namespace std;

int binarySearch(int arr[], int target, int size){
	int low = 0;
	int mid;
	int high = size - 1;
	while(low <= high){
		mid = (low + high) / 2;
		if(arr[mid] == target){
			return mid;
		}
		else if( target < arr[mid]){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return -1;
}

int main(){
	int arr[] = { 2, 4, 6, 8, 9, 10, 42};
	int target = 10;
	int size = sizeof(arr) / sizeof(arr[0]);
	int b = binarySearch(arr, target, size);
	cout<< b <<endl;
	return 0;
}
