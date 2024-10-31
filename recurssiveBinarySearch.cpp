#include<iostream>
#include<vector>
using namespace std;

int recurssiveBinarySearch(vector<int> arr,int target, int low, int high){
	int mid;
	while(low <= high){
		mid = low + (high - low) / 2;
		if(arr[mid] == target){
			return mid;
		}
		
		else if(target < arr[mid]){
			return recurssiveBinarySearch(arr, target, low, mid-1);
		}
		else{
			return recurssiveBinarySearch(arr, target, mid + 1, high);
		}
		
	}
	return -1;
}

int main(){
	vector <int> arr = { 1, 3, 5, 6, 8};
	int target = 2;
	int low = 0;
	int high = arr.size() - 1;
	
	cout<<recurssiveBinarySearch(arr, target, low, high)<<endl;
	
	return 0;
	
}
