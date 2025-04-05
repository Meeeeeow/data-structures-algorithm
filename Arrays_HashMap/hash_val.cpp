#include<iostream>
using namespace std;

const int TABLE_SIZE = 10;

class HashTable{
private:
    int table[TABLE_SIZE];
    string value[TABLE_SIZE];
public:
    HashTable(){
        for(int i=0;i<TABLE_SIZE;i++){
            table[i]= -1;
            value[i]= "";
        }
    }
    bool isEmpty(){
        for(int i=0;i<TABLE_SIZE;i++){
            if(table[i] != -1){
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
        if(table[hashIndex] == -1){
            table[hashIndex] = key;
            value[hashIndex] = val;
            cout<<"Inserted "<<key<<" in index "<<hashIndex<<" of hash table with value "<<val<<endl;
        }else{
            cout<<"Trying to Insert "<< key<<" with value "<<val<<" but this index position "<<hashIndex<<" is occupied by "<<table[hashIndex]<<endl;
        }
    }

    void display(){
        for(int i=0;i<TABLE_SIZE;i++){
            if(table[i] != -1){
                cout<<i<<"("<<table[i]<<","<<value[i]<<")"<<endl;
            }else{
                cout<<i<<"("<<table[i]<<", EMPTY)"<<endl;
            }
        }
    }

    void removeVal(int key){
        int hashIndex = hashFunction(key);
        if(table[hashIndex] == key){
            table[hashIndex] = -1;
            value[hashIndex] = "";
            cout<<"Removed value "<<key<<" associated with index "<<hashIndex<<" from table."<<endl;
        }else{
            cout<<"The value is already removed from index "<<hashIndex<<" and is assigned with -1"<<endl;
        }
    }

    void searchVal(int key){
        int hashIndex = hashFunction(key);
        if(table[hashIndex] == key){
            cout<<key<<" found in index "<<hashIndex<<" and value is "<<value[hashIndex]<<endl;
        }else{
            cout<<key<<" not found in table!"<<endl;
        }
    }

};

int main(void){
    HashTable ht;
    ht.isEmpty();
    cout<<"Initial Table: "<<endl;
    ht.display();
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

