#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter no. of row: ";
    cin>>row;

    for(int i=1; i<=row; i++){
        // print space
        for(int j=i; j<row; j++){
            cout<<"  ";
        }

        //print number
        for(int k=1; k<=i; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}