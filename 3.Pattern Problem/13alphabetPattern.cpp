#include<iostream>
using namespace std;

int main(){
    int row;
    char name = 'a';

    cout<<"Enter no. of row: ";
    cin>>row;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<name<<" ";
        }
        name++;
        cout<<endl;
    }

    return 0;
}