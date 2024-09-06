#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"No. of row and col is equal: ";
    cin>>n;
    int arr[n][n];

    cout<<"Enter element: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // column reverse 
    for(int i=0; i<n; i++){
        int start=0, end=n-1;
        while(start<end){
            swap(arr[start][i], arr[end][i]);
            start++, end--;
        }
        cout<<endl;
    }

    // row reverse 
    for(int i=0; i<n; i++){
        int start=0, end=n-1;
        while(start<end){
            swap(arr[i][start], arr[i][end]);
            start++, end--;
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}