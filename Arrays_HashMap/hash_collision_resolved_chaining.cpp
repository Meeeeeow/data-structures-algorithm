#include<iostream>
#include<list>
using namespace std;

const int TABLE_SIZE = 10;

class HashTable{
private:
    list<pair<int,string>>table[TABLE_SIZE];
public:
    bool isEmpty(){
        for(auto& list:table){
            if(!list.empty()){
                cout<<"Table is not empty!"<<endl;
                return false;
            }
        }
        cout<<"Table is Empty"<<endl;
        return true;
    }

    int hashFunction(int key){
        return key % TABLE_SIZE;
    }

    void insert(int key, string val){
        int hashIndex = hashFunction(key);
        table[hashIndex].push_back({key,val});
        cout<<"Inserted "<<key<<" in index "<<hashIndex<<" of hash table with value "<<val<<endl;
    }

    void display(){
       for(int i=0;i<TABLE_SIZE;i++){
        for(auto& kv:table[i]){
            cout<<"Table index: "<<i<<" and key: "<<kv.first<<" and value is: "<<kv.second<<endl;
        }
       }
    }

    void removeVal(int key){
        int hashIndex = hashFunction(key);
        for(auto it=table[hashIndex].begin();it!=table[hashIndex].end();++it){
            if(it->first == key){
                table[hashIndex].erase(it);
                cout<<"Removed value "<<key<<" associated with index "<<hashIndex<<" from table."<<endl;
                return;
            }
        }
        cout<<"The value is already removed from index "<<hashIndex<<" and is assigned with -1"<<endl;
    }

    void searchVal(int key){
        int hashIndex = hashFunction(key);
        for(auto& kv:table[hashIndex]){
            if(kv.first == key){
                cout<<key<<" found in index "<<hashIndex<<" and value is "<<kv.second<<endl;
                return;
            }
        }
        cout<<key<<" not found in table!"<<endl;
    }

};

int main(void){
    HashTable ht;
    ht.isEmpty();
    cout<<"Inserting data: "<<endl;
    ht.insert(100012, "apple");
    ht.insert(12323, "banana");
    ht.insert(5, "orange");
    ht.insert(22, "mango");
    ht.display();
    ht.isEmpty();
    ht.removeVal(5);
    ht.display();
    ht.insert(245, "plums");
    ht.insert(88129, "pineapple");
    ht.display();
    ht.searchVal(245);
    ht.searchVal(51);

    return 0;
}

