#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter row and col: ";
    cin>>row>>col;

    int matrix[row][col];

    cout<<"Enter elements in sorted order: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int x;
    cout<<"Enter element to search: ";
    cin>>x;

    // Brute - Force method   O(row*col)*******************
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         if(matrix[i][j]==x)
    //         cout<<"Yes";
    //     }
    // }


    // Time Complexity -> O(row+log(row))*************************
    // for(int i=0; i<row; i++){
    //     if(matrix[i][0]<=x && matrix[i][col-1]>=x){
    //         int start=0, end=col-1;
    //         while(start<=end){
    //             int mid = start + (end-start)/2;
    //             if(matrix[i][mid]==x){
    //                cout<<"Yes";
    //                break;
    //             }
    //             else if(matrix[i][mid]>x)
    //             end = mid-1;
    //             else
    //             start = mid+1;
    //         }
    //     }
    // }

    // Time Complexity -> O(log(row*col))****************************
    int start=0, end=(row*col-1);
    while(start<=end){
        int mid = start + (end-start)/2;
        int row_index = mid/col;
        int col_index = mid%col;
        if(matrix[row_index][col_index] == x){
            cout<<"Yes";
            break;
        }
        else if(matrix[row_index][col_index] < x)
        start = mid+1;
        else
        end = mid-1;
    }
}