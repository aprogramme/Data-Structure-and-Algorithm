#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n){
        n = n/10;
        count++;
    }
    return count;
}

void Armstrong(int num, double digit){
    int n = num;
    double sum = 0, rem;
    while(n){
        rem = n % 10;
        n = n / 10;
        sum = sum + pow(rem, digit);
    }
    
    if(sum == num){
        cout<<"It is Armstrong number";
    }
    else{
        cout<<"It is not Armstrong number";
    }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int digit = countDigit(num);

    Armstrong(num, digit);

    return 0;
}