#include<iostream>
#include<vector>
using namespace std;

int main(){
    // create 2D vector 
    // vector<vector<int>>matrix(3, vector<int>(4,1));

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"Rows = "<<matrix.size()<<endl;
    // cout<<"Col = "<<matrix[0].size();
    

    // Taking value from User ---------------------
    int row, col;
    cout<<"Enter rows and col: ";
    cin>>row>>col;

    vector<vector<int>>matrix(row, vector<int>(col));

    cout<<"Enter value: ";
    for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
    cin>>matrix[i][j];

    // print matrix 
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}