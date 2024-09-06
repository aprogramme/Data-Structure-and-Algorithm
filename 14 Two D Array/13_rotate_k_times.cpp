#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Size of row and col is equal: ";
    cin>>n;

    int matrix[n][n];

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    int k;
    cout<<"How many times matrix rotate: ";
    cin>>k;

    k = k%4;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    while(k){
        // transpose 
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reverse (row reverse)
        for(int i=0; i<n; i++){
            int start=0, end=n-1;
            while(start<end){
                swap(matrix[i][start], matrix[i][end]);
                start++, end--;
            }
        }
        k--;
    }

    // print matrix 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}