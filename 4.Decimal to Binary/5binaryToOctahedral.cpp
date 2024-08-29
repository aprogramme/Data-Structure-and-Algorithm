#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number in binary form: ";
    cin>>num;

    // binary -> decimal 
    int mul = 1;
    int deci = 0;
    while(num){
        int rem = num % 10;
        num = num / 10;
        deci = rem * mul + deci;
        mul = mul * 2;
    }

    // decimal -> octahedral 
    int mul1 = 1;
    int ans1 = 0;
    while(deci){
        int rem = deci % 8;
        deci = deci / 8;
        ans1 = rem * mul1 + ans1;
        mul1 = mul1 * 10;
    }
    cout<<"In octahedral from number is: "<<ans1;

    return 0;
}