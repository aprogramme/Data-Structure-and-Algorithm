#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter no. of row: ";
    cin>>row;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }

        for(int j=(2*i-1); j<=2*(row-1); j++){
            cout<<"  ";
        }

        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<row; i++){
        for(int j=i; j<row; j++){
            cout<<"*"<<" ";
        }

        for(int j=1; j<=2*i; j++){
            cout<<"  ";
        }

        for(int j=i; j<row; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}