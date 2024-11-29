#include<iostream>
#include<algorithm>
using namespace std;

bool isValid(int arr[],int n, int c, int mid){
	
	int cows = 1, lastStallPosition = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] - lastStallPosition >= mid){
			lastStallPosition = arr[i];
			cows++;
		}
		if(cows == c) return true;
	}
	return false;
}

int allocateCows(int arr[],int n, int c){
	sort(arr, arr + n);
	int low =1 ,high = arr[n-1] - arr[0];
	int ans =-1;
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(isValid(arr,n,c,mid)){//right part bcz, have to find largest 
			ans = mid; // temp if not anyother then return ans
			low = mid+1;
		}
		else{//left part
			high = mid -1;
		}	
	}
	return ans;
}

int main(){
	int arr[] = {1,2,8,4,9}, n = 5, c = 3;
	cout<<allocateCows(arr, n, c);
	
	return 0;
}
