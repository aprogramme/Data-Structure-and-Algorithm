#include<iostream>
using namespace std;

int main(){
    int arr[1000];

    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    cout<<"Enter element of array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=size-1; i>0; i--){
        int index = i;

        for(int j=i-1; j>0; j--){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}