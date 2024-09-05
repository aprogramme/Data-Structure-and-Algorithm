#include<iostream>
using namespace std;

int main(){
    int size = 6;
    int arr[size] = {2, 4, 8, 10, 12};

    int sum=0;
    for(int i=0; i<size-1; i++){
        sum += arr[i];
    }

    // sum of A.P terms 
    int first = arr[0];
    int diff = arr[1]-arr[0];

    int add = (size*(2*first + (size-1)*diff))/2;

    int result = add - sum;

    cout<<"Missing element: "<<result;

    return 0;
}