#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of row: ";
    cin>>n;

    for(int row=1; row<=n; row++){
        char name = 'a';
        for(int col=1; col<=n; col++){
            cout<<name<<" ";
            name++;
        }
        cout<<endl;
    }

    return 0;
}