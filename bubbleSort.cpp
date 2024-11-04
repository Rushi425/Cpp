#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
	
	for(int i = 0; i < n - 1; i++){
		bool isSorted = false;
		for(int j = 0; j < n - 1 - i; j++){
			if(arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
				isSorted = true;
			}
		}
		if(!isSorted) break;
	}
	
	cout<< "Sorted array"<<endl;
	for(int i = 0; i < n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n = 5, arr[]={4, 2, 8, 1, 7};
	bubbleSort(arr, n);
	
	return 0;
}
