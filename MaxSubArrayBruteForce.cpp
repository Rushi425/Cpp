#include<iostream>
using namespace std;
int main(){
	
	int arr[] = {1, 2, 3, 4, 5, 6};
	int sz = 6;
	int maxSum = INT_MIN;
	
	for(int  start = 0; start < sz; start++){
		int currentSum = 0;
		for(int  j = start; j < sz; j++){
			currentSum +=arr[j];
			cout<<"Cuurent Sum "<<start<<" = "<<currentSum<<endl;
		}
		maxSum = max(currentSum, maxSum);
		cout<<start<<" = "<<maxSum<<endl;
	}
	cout<< "MAXIMUN SUM IS =" <<maxSum<<endl;
	
	
	return 0;
}




































//
//int arr[] = {1, 2, 3, 4, 5, 6};
//	int size = 6;
//
//	
//	int maxSum = INT_MIN;
//	for(int i = 0; i < size; i++ ){
//		int CurSum = 0;
//		for(int j = i; j < size; j++){
//			CurSum += arr[j];
//			maxSum = max(CurSum, maxSum);
//		}
//	}
//	cout<<"Maximum suarray sum ="<<maxSum<<endl;
