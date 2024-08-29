#include<iostream>
using namespace std;

int main(){
    int num;
    int rem;
    int ans=0;
    int mul=1;

    cout<<"Enter number in decimal: ";
    cin>>num;

    while(num){
        rem = num % 8;
        num = num / 8;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout<<"In octahedral form number is: "<<ans;

    return 0;
}