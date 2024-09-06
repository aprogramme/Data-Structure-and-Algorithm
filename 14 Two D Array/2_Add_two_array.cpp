#include<iostream>
using namespace std;

int main(){
    int arr1[3][4] = {2, 5, 1, 7, 1, 7, 3, 8, 2, 4, 9, 1};
    int arr2[3][4] = {5, 1, 8, 6, 2, 9, 1, 0, 2, 8, 2, 7};
    int ans[3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            ans[i][j] = arr1[i][j]+arr2[i][j];
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}