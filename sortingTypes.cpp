#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
	
	for(int i = 0; i < n - 1; i++){
		int small = i; // Assume the smallest number at index 0.
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[small]){
				small = j;
			}
		}
		swap(arr[i], arr[small]);// Swap the smallest element with the current element at index i
	}
	cout<< "Sorted array"<<endl;
	for(int i = 0; i < n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}

void bubbleSort(int arr[], int n){
	for(int i = 0; i < n - 1 ; i++){
	bool isSorted = false;
		for(int j = 0; j < n - 1; j++){
			if(arr[j] > arr[j + 1]){
				swap(arr[j], arr[j+1]);
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

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i]; // Current element to insert
        int j = i - 1;

        // Move elements that are greater than `key` one position ahead
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Insert the `key` into the correct position
    }
    cout << "Sorted array (Insertion Sort):" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
	int arr[5]={4, 5, 9, 1, 7};
	int n = 5;
	selectionSort(arr,n);
	bubbleSort(arr,n);
	insertionSort(arr,n);
	
	return 0;
}
