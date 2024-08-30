#include<iostream>
using namespace std;

int add(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int a, b;
    cout<<"Enter two number:";
    cin>>a>>b;

    cout<<"Sum of number is: "<<add(a, b);

    return 0;
}