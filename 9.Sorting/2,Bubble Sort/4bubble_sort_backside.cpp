#include<iostream>
using namespace std;

int main(){
    int arr[1000];

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
    for(int i=n-1; i>0; i--){
        for(int j=n-1; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
    }

    // print sorted array 
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}