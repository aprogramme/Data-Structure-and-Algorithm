#include<iostream>
using namespace std;

char lowercase(char ch){
    int ans = ch - 'a' + 'A';
    return ans;
}

int main(){
    char ch;
    cout<<"Enter lowercase alphabet: ";
    cin>>ch;

    cout<<lowercase(ch);
    return 0;
}