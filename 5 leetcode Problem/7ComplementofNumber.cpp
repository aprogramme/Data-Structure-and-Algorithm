#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int ans=0, rem, mul=1;
    while(num){
        rem = num % 2;
        rem = rem ^ 1;
        num = num / 2;
        ans = rem * mul + ans;
        mul = mul * 2;
    }

    int ans1=0, rem1, mul1=1;
    while(ans){
        rem1 = ans % 10;
        ans = ans / 10;
        ans1 = rem1 * mul1 + ans1;
        mul1 = mul1 * 2;
    }

    cout<<"The complement of number is: "<<ans1;

    return 0;
}