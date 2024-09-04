#include<iostream>
using namespace std;

int main(){
    int rem;
    int rev = 0;
    int num;
    cout<<"Enter number: ";
    cin>>num;

    while(num){
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }

    cout<<"Reversed number is: "<<rev;

    return 0;
}