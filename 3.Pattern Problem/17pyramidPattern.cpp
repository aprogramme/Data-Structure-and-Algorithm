#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter no. of row: ";
    cin>>row;

    for(int i=1; i<=row; i++){
        // Space
        for(int j=i; j<row; j++){
            cout<<"  ";
        }

        // Star
        for(int k=row; k>=row-(i-1); k--){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}