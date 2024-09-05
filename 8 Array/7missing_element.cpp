#include<iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n] = {1, 3, 4, 2, 6};

    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum = sum + arr[i];
    }

    // sum of n number (1->n)
    int add = n*(n+1)/2;

    int result = add - sum;

    cout<<"Missing element: "<<result;

    return 0;

}