#include<iostream>
#include<vector>
using namespace std;

int allocatePackage(vector<int>weight, int D){
	
	int low = weight[0], high = 0;
	for(int n : weight){
		if(n > low) low = n;   //keeping the max element equal to low
		high += n;             // sum of all weights -> high
	}
	
	//applying B.S
	while(low < high){
		int totalDays = 1, current_weight = 0;
		
		int mid = low + (high - low) / 2;
		
		for(int weights : weight){
			if(current_weight + weights > mid){
				totalDays++;
				current_weight = 0;
			}
			current_weight += weights;
		}
		if(totalDays < D) high = mid - 1;
		else low = mid + 1;	
	}
	return low;
	
}
int main(){
	vector<int>weight = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int D = 5;
	
    cout<<"Minimum Capacity : "<<allocatePackage(weight, D);
    
    return 0;
}
