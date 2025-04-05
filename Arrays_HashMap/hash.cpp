#include<iostream>
using namespace std;

const int TABLE_SIZE = 10;

class HashTable{
private:
    int table[TABLE_SIZE];
public:
    HashTable(){
        for(int i=0;i<TABLE_SIZE;i++){
            table[i]= -1;
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

    void insert(int key){
        int hashIndex = hashFunction(key);
        if(table[hashIndex] == -1){
            table[hashIndex] = key;
            cout<<"Inserted "<<key<<" in index "<<hashIndex<<" of hash table."<<endl;
        }else{
            cout<<"Trying to Insert "<< key<<" but this index position "<<hashIndex<<" is occupied by "<<table[hashIndex]<<endl;
        }
    }

    void display(){
        for(int i=0;i<TABLE_SIZE;i++){
            cout<<i<<" -> "<<table[i]<<endl;
        }
    }

    void removeVal(int key){
        int hashIndex = hashFunction(key);
        if(table[hashIndex] == key){
            table[hashIndex] = -1;
            cout<<"Removed value "<<key<<" associated with index "<<hashIndex<<" from table."<<endl;
        }else{
            cout<<"The value is already removed from index "<<hashIndex<<" and is assigned with -1"<<endl;
        }
    }

    void searchVal(int key){
        int hashIndex = hashFunction(key);
        if(table[hashIndex] == key){
            cout<<key<<" found in index "<<hashIndex<<endl;
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
    ht.insert(100012);
    ht.insert(12323);
    ht.insert(5);
    ht.insert(22);
    ht.display();
    ht.isEmpty();
    ht.removeVal(5);
    ht.display();
    ht.insert(245);
    ht.insert(88129);
    ht.display();
    ht.searchVal(245);
    ht.searchVal(51);

    return 0;
}
