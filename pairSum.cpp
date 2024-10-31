#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    
    int i = 0, j = n - 1;
    while(i < j){
        int Sum = nums[i] + nums[j];
        
        if(Sum < target){
            i++;
        } else if(Sum > target){
            j--;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            // Continue the loop to find all pairs
            i++;
            j--;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,3,4,6,9};
    int target = 5;
    
    vector<int> ans = pairSum(nums, target);
    if(!ans.empty()){
        cout << "Pair found: " << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }
    return 0;
}
