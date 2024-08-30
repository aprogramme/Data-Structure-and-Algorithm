#include<iostream>
using namespace std;

int main(){
    int rem;
    int sum = 0;
    int num;
    cout<<"Enter number: ";
    cin>>num;

    while(num>0){
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }
    cout<<"The sum of given number is: "<<sum;

    return 0;
}