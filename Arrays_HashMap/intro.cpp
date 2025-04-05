#include<bits/stdc++.h>
using namespace std;

int main(void){
    string cars[5] = {"ABC", "DEF", "GHI"};
    int n;
    cout<<"Enter a size: ";
    cin>>n;
    vector <int> myNum(n, 0);

    int ageSize;
    cout<<"Enter length of array: ";
    cin>>ageSize;
    vector<int> ages(ageSize, 0);

    cout<<sizeof(cars)/sizeof(cars[0])<<endl;
    for(int i=0; i<sizeof(cars)/sizeof(cars[0]);i++){
        cout<< cars[i]<<endl;
    }

    for(string car: cars){
        cout<<car<<endl;
    }

    cout<<"Array inputting"<<endl;
    for(int i= 0;i < n;i++){
        cin>>myNum[i];
    }

    for(int num : myNum){
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<"Average Age calculator"<<endl;
    for(int i= 0;i< ageSize;i++){
        cin>>ages[i];
    }

    int totalAge= 0;
    for(int i= 0;i<ageSize;i++){
        totalAge+= ages[i];
    }
    cout<<ages.size()<<endl;
    cout<<"Average age of this community is: "<<totalAge<< " and average age is: "<< totalAge/ ages.size()<<endl;
    return 0;
}
