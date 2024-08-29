#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number in binary form: ";
    cin>>num;

    // Octahedral -> decimal 
    int deci = 0;
    int mul = 1;
    while(num){
        int rem = num % 10;
        num = num / 10;
        deci = rem * mul + deci;
        mul = mul * 8;
    }

    // Decimal -> Binary
    int ans1 = 0;
    int mul1 = 1;
    while(deci>0){
        int rem = deci % 2;
        deci = deci / 2;
        ans1 = rem * mul1 + ans1;
        mul1 = mul1 * 10;
    }
    cout<<"In binary form number is: "<<ans1;

    return 0;
}