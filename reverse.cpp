#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> nums, int n){
	int s = n ;
	for(int i = 0; i < n; i++){
		swap(nums[i], nums[s]);
		n--;
	}
	return nums;
	
}

int main(){
	vector<int> nums;
	int n = 3;
	
	nums.push_back(-1);
	nums.push_back(2);
	nums.push_back(-3);
	nums.push_back(-5);
	nums.push_back(05);
	nums.push_back(6);
	nums.push_back(85);
	nums.push_back(42154124);
	nums.push_back(42241);
	nums.push_back(4);
	nums.push_back(1404244);
	
	vector<int>ans = reverse(nums, n);
	
	for(int num : ans ){
		cout<<num<<" ";
	}
	cout<<endl;
 	return 0;
}
