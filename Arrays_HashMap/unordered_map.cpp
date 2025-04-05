#include<iostream>
#include<unordered_map>
using namespace std;

int main(void){
    unordered_map<int, string> map;
    map[1]="Apple";
    map[2]="Orange";
    map[3]="Mango";

    cout<<"key 1 has value "<<map[1]<<endl;

    for(auto&kv : map){
        cout<<"key: "<<kv.first<<" and value is "<<kv.second<<endl;
    }

    return 0;
}
