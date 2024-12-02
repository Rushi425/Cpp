#include <iostream>
#include<map>

using namespace std;
int main(){
    map<string, int> myMap;
    myMap["yash"] = 10;

    myMap.emplace("om", 10);

    for(auto i : myMap){
        cout<<i.first<<i.second<<endl;
    }
    
    cout<<myMap.count("yash")<<endl;

    return 0;
}