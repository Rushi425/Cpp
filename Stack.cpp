#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack<int> s ;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
    s.pop();
    
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;
    s.pop();s.pop();s.pop();s.pop();s.pop();

    cout<<s.empty()<<endl;

    return 0;

}