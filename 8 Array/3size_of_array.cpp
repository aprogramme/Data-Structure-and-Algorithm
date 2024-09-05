#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    int lenght = sizeof(arr)/sizeof(arr[0]);

    cout<<"lenght: "<<lenght;

    return 0;
}