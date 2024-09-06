#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter string: ";
    getline(cin, name);
    int n = name.size();

    int start=0, end=n-1;
    while(start<end){
        if(name[start] != name[end]){
            cout<<"Not a palindrome";
            return 0;
        }
        start++;
        end--;
    }
    cout<<"It is a palindrome";
}