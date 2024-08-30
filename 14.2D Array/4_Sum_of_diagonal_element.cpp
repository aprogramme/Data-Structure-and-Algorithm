#include<iostream>
using namespace std;

int main(){
    int arr[4][4] = {5, 8, 3, 9, 6, 2, 8, 4, 5, 3, 2, 2, 2, 8, 1, 9};

    // First diagonal - left to right 
    int sum=0;
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<4; j++){
    //         if(i==j)
    //         sum += arr[i][j];
    //     }
    // }

    for(int i=0; i<4; i++)
    sum += arr[i][i];

    cout<<sum<<endl;

    // Second diagonal - right to left 
    int total=0;
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<4; j++){
    //         if(i+j==3)
    //         total += arr[i][j];
    //     }
    // }

    int i=0, j = 4-1;
    while(j>=0){
        total += arr[i][j];
        i++, j--;
    }
    cout<<total;
}