#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter string: ";
    getline(cin, name);

    int size=0;
    while(name[size] != '\0'){
        size++;
    }
    cout<<"Size: "<<size;
}