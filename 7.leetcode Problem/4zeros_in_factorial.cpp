#include<iostream>
using namespace std;

int factorial(int n){
    if(n<5){
        cout<<"0 zeros";
    }

    int count = 0;

    while(n>=5){
        n = n/5;
        count = count + n;
    }
    cout<<count<<" zeros";
}

int main(){
    int n;
    cout<<"Enter number to calculate zeros in factorial of entered number: ";
    cin>>n;

    factorial(n);

    return 0;
}