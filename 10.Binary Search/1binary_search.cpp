#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid;

    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid] == key){
            cout<<"Element found at index "<<mid;
            return 1;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }

    return -1;
}

int main(){
    int arr[1000];

    int n;
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter increasing sorted array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element to find: ";
    cin>>key;

    BinarySearch(arr, n, key);

    return 0;
}