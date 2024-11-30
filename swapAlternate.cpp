#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
	 for(int i = 0; i < size ;i = i+2){
        
            swap(arr[i], arr[i+1]);
        
    }
    for(int i = 0; i < size ;i ++){
	
    cout<<arr[i];
	}
}

int main(){
    int arr[10] ={1, 2, 3, 4, 5, 6,7,8,9,4};
	
	swapAlternate(arr,10);
   
}

