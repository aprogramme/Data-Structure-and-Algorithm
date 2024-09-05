#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter element: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int ans = INT32_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }

    int sec_max = INT32_MIN;
    for(int i=0; i<size; i++){
        if(ans != arr[i]){
            sec_max = max(sec_max, arr[i]);
        }
    }
    cout<<"Second highest element: "<<sec_max;

    return 0;
}