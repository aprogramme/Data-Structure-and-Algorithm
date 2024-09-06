#include<iostream>
using namespace std;

int main(){
    int arr[8] = {3, 2, 5, 3, 1, 2, 3, 7};

    for(int i=0; i<8; i++)
    arr[i]--;           // {2, 1, 4, 2, 0, 1, 2, 6}

    for(int i=0; i<8; i++)
    arr[arr[i]%8] += 8;    // {10, 17, 28, 2, 8, 1, 14, 6};

    for(int i=0; i<8; i++)
    arr[i] = arr[i]/8;     // {1, 2, 3, 0, 1, 0, 1, 0}

    for(int i=0; i<8; i++)
    cout<<i+1<<" = "<<arr[i]<<endl;

    return 0;
}