#include<iostream>
#include<vector>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter rows and col: ";
    cin>>row>>col;

    vector<vector<int>>matrix(row, vector<int>(col));

    vector<int>ans;

    cout<<"Enter value: ";
    for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
    cin>>matrix[i][j];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int top=0, bottom=row-1, left=0, right=col-1;

    while(left<=right && top<=bottom){
        // print top
        for(int i=0; i<=right; i++)
        ans.push_back(matrix[top][i]);
        top++;

        // print right 
        for(int i=top; i<=bottom; i++)
        ans.push_back(matrix[i][right]);
        right--;

        // print bottom 
        if(top<=bottom){
            for(int i=right; i>=left; i--)
            ans.push_back(matrix[bottom][i]);
            bottom--;
        }

        // print left 
        if(left<=right){
            for(int i=bottom; i>=top; i--)
            ans.push_back(matrix[i][left]);
            left--;
        }

        for(int i=0; i<20; i++)
        cout<<ans[i]<<" ";

    }
}