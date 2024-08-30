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

    // rotate by 90 degree
    // int ans[n][n];
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         ans[j][n-1-i] = arr[i][j];
    //     }
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }



    // Another method without creating extra array 
    // matrix -> transpose -> reverse -> done(90degree)

    // transpose
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    // reverse (row reverse)
    for(int i=0; i<n; i++){
        int start=0, end=n-1;
        while(start<end){
            swap(arr[i][start], arr[i][end]);
            start++, end--;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}