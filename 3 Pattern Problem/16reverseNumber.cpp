#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter no. of row: ";
    cin>>row;

    for(int i=1; i<=row; i++){
        for(int j=row; j>=row-(i-1); j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}