#include <iostream>
#include<set>

using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);

    for(int i : s){
        // cout<<i<<" ";
    }

    cout<<*(s.lower_bound(20))<<endl;//>=
    cout<<*(s.upper_bound(20))<<endl;//>

    return 0;
}