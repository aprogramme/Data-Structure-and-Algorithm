#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    int pow = 1;
    while(num >= pow){
        if(num % pow == 0){
            pow = pow * 2;
        }
        else{
            cout<<"Not a power of 2";
            return 0;
        }
    }
    cout<<"Yes, power of 2";

    return 0;
}