#include<iostream>
using namespace std;

bool Prime(int n){
    if(n<2){
        return 0;
    }

    for(int i=2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    cout<<Prime(a);

    return 0;
}