#include<iostream>
using namespace std;

void nimGame(int n){
    if(n%4 == 0){
        cout<<"You lose";
    }
    else{
        cout<<"You win";
    }
}

int main(){
    // Game start from me 
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    nimGame(a);

    return 0;
}