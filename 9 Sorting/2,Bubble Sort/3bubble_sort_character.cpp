#include<iostream>
using namespace std;

int main(){
    char arr[1000];

    int n;
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Unsorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // bubble Sort 
    for(int i=0; i<n-1; i++){
        bool swapped = 0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }

    // print sorted array 
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}