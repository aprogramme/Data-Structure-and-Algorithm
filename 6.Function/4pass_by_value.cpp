#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    cout<<"Enter two number: ";
    cin>>a>>b;

    cout<<"Before swapping"<<endl;
    cout<<a<<" "<<b<<endl;;

    swap(a,b);

    cout<<"After swapping"<<endl;
    cout<<a<<" "<<b;

    return 0;
}