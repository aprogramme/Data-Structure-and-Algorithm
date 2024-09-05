
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;

    int arr[1000];

    cout<<"Enter element: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Rotate 
    int temp = arr[size-1];
    for(int i = size-2; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;

    // print rotated array 
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}