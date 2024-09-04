#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    double i=1;
    while(i*i <= num){
        if(i*i>=INT64_MAX){
            return 0;
        }
        if(i*i <= num){
            i++;
        }
    }
    
    cout<<"Square root is: "<<i-1;

    return 0;
}