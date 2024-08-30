#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int c0=0, c1=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0)
        c0++;
        else
        c1++;
    }

    for(int i=0; i<c0; i++){
        cout<<"0 ";
    }
    for(int i=c0; i<n; i++){
        cout<<"1 ";
    }
}