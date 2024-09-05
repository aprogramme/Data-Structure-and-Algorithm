#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter element: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    } 

    int search;
    cout<<"Enter element to search: ";
    cin>>search;

    int index = -1;

    for(int i=0; i<size; i++){
        if(arr[i]==search){
            index = i;
        }
    }
    cout<<index;

    return 0;
}