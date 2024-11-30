#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
/*    
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    
    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.pop_back();
    l.pop_front();
    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;
*/

/* 
    deque<int> deque = {1,2};
    deque.push_back(3);
    deque.push_front(4);
    for(int i : deque){
        // cout<<i<<" ";
    }
    
    cout<<deque[0]<<endl;
*/

    pair<int, int>p ={4,5};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    

    return 0;
}