#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of row: ";
    cin>>n;
    // int num=1;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            cout<<(row-1)*5+col<<" ";  // return pattern without using third variable
            // cout<<num<<" ";
            // num++;
        }
        cout<<endl;
    }

    return 0;
}