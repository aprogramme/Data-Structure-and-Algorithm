#include<iostream>
using namespace std;

int main(){
    int num;
    int ans=0;
    int rem=0;
    int mul=1;

    cout<<"Enter number in decimal form: ";
    cin>>num;

    while(num>0){
        rem = num % 2;
        num = num / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout<<"In binary form number is: "<<ans;

    return 0;
}