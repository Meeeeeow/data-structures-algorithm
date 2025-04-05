#include<iostream>
#include<unordered_set>
using namespace std;

int main(void){
    unordered_set<int> set;
    set.insert(10);
    set.insert(20);
    set.insert(30);
    set.insert(30);


    for(auto&elem : set){
        cout<<"Element "<<elem<<endl;
    }
    if(set.find(30) != set.end()){
        cout<<"30 is already present!"<<endl;
    }

    return 0;
}
