#include<iostream>
#include<vector>
using namespace std;

// Function to check if we can allocate books pages
bool isValid(vector<int> nums, int m, int n, int maximumBooksAllowed){
		int student = 1, pages = 0;
		
		for(int i = 0; i < n; i++){
			if(nums[i] > maximumBooksAllowed) return false;
			
			if(nums[i] + pages <= maximumBooksAllowed){
				pages += nums[i];
			}
			else{
				student++;
				pages = nums[i];
				if(student > m) return false;
			}
		}
		
	return true;
}
	
// Function to find the minimum possible maximum pages a student has to read

int allocatesBook(vector<int> nums, int m, int n){
	if(m > n) return -1; // If there are more students than books
	
	int sum = 0;
	int a = 0;
	// Calculate the total sum of pages in all books
	while(a < n){
		sum += nums[a];
		a++;
	}
	// 'low' is set as the largest single book
	int low = 0, high = sum, mid, ans = -1 ;
	// Binary search
	while(low <= high){
		mid = low +(high - low) / 2;
		
		if(isValid(nums, m, n, mid)){
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
	vector<int> nums ={15, 17, 20};
	int n = nums.size();
	int m = 2;
	
	cout<<allocatesBook(nums, m, n)<<endl;
	
	return 0;	
}
