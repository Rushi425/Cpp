#include<iostream>
#include<vector>
// #include<unordered_map>
#include<queue>

using namespace std;
int main(){
    priority_queue<int> pq ;
    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;


    return 0;
}