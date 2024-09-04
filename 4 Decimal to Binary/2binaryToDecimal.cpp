#include<iostream>
using namespace std;

int main(){
    int num;
    int rem=0;
    int ans=0;
    int mul=1;

    cout<<"Enter number in binary form: ";
    cin>>num;

    while(num>0){
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout<<"In decimal form number is: "<<ans;

    return 0;
}