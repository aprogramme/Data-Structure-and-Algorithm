#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter string: ";
    getline(cin, name);
    int n = name.size();
    cout<<"Original string: "<<name<<endl;

    int start=0, end=n-1;
    while(start<end){
        swap(name[start], name[end]);
        start++;
        end--;
    }
    cout<<"Reversed string: "<<name;

    return 0;
}