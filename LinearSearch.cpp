#include<iostream>
using namespace std;

int LinearSearch(int array[],int size, int target){
	for(int i = 0; i < sizeof(array); i++){
			if(array[i] == target){
				return i;
			}
		}
		return -1;
}
int main(){
	int array[] = {1,9,8,6,2,3,7};
	int target = 10;
	int size = 6;
	
	cout<<LinearSearch(array,size, target)<<endl;
	
	
}
