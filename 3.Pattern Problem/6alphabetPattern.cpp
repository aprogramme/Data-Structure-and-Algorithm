#include<iostream>
using namespace std;

int main(){
    char name = 'a';
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            cout<<name<<" ";
        }
        name++;
        cout<<endl;
    }

    return 0;
}