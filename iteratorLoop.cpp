#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec ={1,2,3,4,5};

    // vector<int>::iterator it;  replaced with auto 
    for(auto it = vec.begin(); it!= vec.end(); it++){ // forward 
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it = vec.rbegin(); it!= vec.rend(); it++){ // backward (reverse)
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}