#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> merge(vector<int>n1, vector<int>n2, int m , int n){
	
	for(int i = 0; i < n; i++){
		n1[m] = n2[i];
		m++;
	}
	
	sort(n1.begin(), n1.end());
	
	return n1;
}
int main(){
	vector<int>n1 = {4, 8, 9, 0, 0};
	vector<int>n2 = {1, 3};
	int m = 3, n = 2;
	
	vector<int>merge1 = merge(n1, n2, m, n);
	
	for(int a : merge1){
		cout<<a<<" ";
	} 
	cout<<endl;
	
	return 0;
}
