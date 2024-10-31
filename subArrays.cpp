#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;
	
//	
//	for(int st = 0; st < size; st++){
//		for(int end = st; end < size; end++){
//			for(int i = st ; i <= end; i++){
//				cout << arr[i];
				
	for(int i = 0; i < size; i++){
		for(int j = i; j < size; j++){
			for(int k = i ; k <= j; k++){
				cout<<arr[k];
			}
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
