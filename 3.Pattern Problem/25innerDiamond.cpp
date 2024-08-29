#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter no. of row: ";
    cin>>row;

    // Upper Half 
    for(int i=1; i<=row; i++){
        // print star 
        for(int j=i; j<=row; j++){
            cout<<"*"<<" ";
        }

        // print space 
        for(int k=1; k<=2*(i-1); k++){
            cout<<"  ";
        }

        for(int k=row; k>=i; k--){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    // Lower Half 
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }

        for(int k=2*i; k<2*(row+1)-2; k++){
            cout<<"  ";
        }

        for(int k=1; k<=i; k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
    
}