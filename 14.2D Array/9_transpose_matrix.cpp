#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"No. of row and col is equal: ";
    cin>>n;

    int arr[n][n];

    cout<<"Enter elements: ";
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

    // transpose
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout<<"Transpose matrix "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}