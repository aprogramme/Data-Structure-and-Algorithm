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

    // Sorting from smallest number in increasing number 
    // 7 3 1 9 4 8

    // 1 3 7 9 4 8
    // 1 3 7 9 4 8
    // 1 3 4 9 7 8
    // 1 3 4 7 9 8
    // 1 3 4 7 8 9
    for(int i=0; i<size-1; i++){
        int index = i;

        for(int j=i+1; j<size; j++){
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