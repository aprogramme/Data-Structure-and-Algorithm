#include<iostream>
using namespace std;

void printcol(int arr[][4], int row, int col){

    // column wise 
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // create 2D array 
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // print all the value in arr 
    // for(int row=0; row<3; row++){
    //     for(int col=0; col<4; col++){
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }


    // print all the value in array col wise, function call 
    // printcol(arr, 3, 4);

    // Find an element in array 
    int x = 7;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col]==x){
                cout<<"Yes";
                return 1;
            }
        }
    }
    cout<<"No";
}