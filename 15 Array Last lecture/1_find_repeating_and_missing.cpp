#include<iostream>
using namespace std;

int main(){
    int arr[7] = {4, 3, 2, 1, 2, 7, 6};

    for(int i=0; i<7; i++){
        arr[i]--;           // [3, 1, 6, 0, 1, 2, 5]
    }
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<7; i++){
        arr[arr[i]%7] += 7;    // [10, 15, 13, 7, 1, 9, 12]
    }
     for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Missing
    for(int i=0; i<7; i++){
        if(arr[i]/7==0){
            cout<<"Missing: "<<i+1;
            break;
        }
    }
    cout<<endl;

    // Repeating
    for(int i=0; i<7; i++){
        if(arr[i]/7==2){
            cout<<"Repeat: "<<i+1;
            break;
        }
    }
}