#include<iostream>
using namespace std;

int main(){
    int num;
    int ans=0;
    int rem;
    int mul=1;

    cout<<"Enter number in octahedral form: ";
    cin>>num;

    while(num){
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 8;
    }
    cout<<"In decimal form number is: "<<ans;

    return 0;
}