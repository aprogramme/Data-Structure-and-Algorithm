#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    cout<<"Factorial is: "<<factorial(a);

    return 0;
}