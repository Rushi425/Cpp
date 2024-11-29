#include<iostream>
using namespace std;

bool isValid(int arr[], int mid, int m, int n){
	int painters = 1, boards = 0;
	
	for(int i = 0; i < n; i++){
		if(arr[i] > mid) return false;
		
		if(arr[i] + boards <= mid){
			boards += arr[i];
		}
		else{
			painters++;
			boards = arr[i];
			if(painters > m) return false;
		}
		
	}
	return true;
}

int painterPartition(int arr[], int n, int m){
	int low = 0;
	int high = 0;
	for(int i = 0; i < n; i++){
		high += arr[i];
	}
	
	int ans = -1;
	while(low <= high){
		if(m > n) return -1;
		int mid = low + (high - low) / 2;
		
		if(isValid(arr, mid, m, n)){
			ans = mid;
			high = mid - 1;
		}	
		else{
			low = mid + 1;
		}
		
	}
	return ans;
}

int main(){
	int arr[] = {10, 20, 30, 40};
	int n = 4, m = 1;
	
	cout<<painterPartition(arr, n, m); 
	return 0;
}
