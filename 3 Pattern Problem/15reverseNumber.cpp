#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter no. of row: ";
    cin>>row;

    for(int i=row; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}