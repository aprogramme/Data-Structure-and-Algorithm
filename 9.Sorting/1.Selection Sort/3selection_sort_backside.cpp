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

    // Sorting from higher element in increasing order 
    // 5 3 8 1 9 4

    // 5 3 8 1 4 9
    // 5 3 4 1 8 9
    // 1 3 4 5 8 9
    // 1 3 4 5 8 9
    // 1 3 4 5 8 9
    for(int i=n-1; i>1; i--){
        int index = i;
        for(int j=i-1; j>=0; j--){
            if(arr[j]>arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}