#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter no. of row: ";
    cin>>row;

    for(int i=row; i>=1; i--){
        // print space
        for(int j=i; j<row; j++){
            cout<<"  ";
        }

        // print star 
        for(int k=1; k<=(2*i-1); k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;

}