#include<iostream>
#include<vector>
using namespace std;

void waveForm(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        if(i%2==0){
            for(int j=0; j<row; j++)
            cout<<arr[j][i]<<" ";
        }
        else{
            for(int j=row-1; j>=0; j--)
            cout<<arr[j][i]<<" ";
        }
    }

}

int main(){
    int arr[4][4] = {3, 6, 4, 2, 7, 8, 3, 5, 9, 3, 2, 1, 3, 8, 5, 9};

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    waveForm(arr, 4, 4);
}