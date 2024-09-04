#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int x = num;

    int ans=0;
    int rem;
    while(num>0){
        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
    }

    if(ans == x){
        cout<<"Number is Pallindrome";
    }
    else{
        cout<<"Not a Pallindrome";
    }

    return 0;
}