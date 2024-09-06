#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 7, 11, 15, 27};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 22;

    // Brute Force method  - O(n^2)
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]+arr[j]==target){
    //             cout<<"Sum found: "<<arr[i]<<" "<<arr[j];
    //         }
    //     }
    // }

    // Binary Search  - O(nlogn)
    // for(int i=0; i<n-1; i++){
    //     int x = target-arr[i];
    //     int start=i+1, end=n-1, mid;
    //     while(start<=end){
    //         mid = start+(end-start)/2;
    //         if(arr[mid]==x){
    //             cout<<"Sum found: "<<arr[i]<<" "<<arr[mid];
    //             break;
    //         }
    //         else if(arr[mid]>x)
    //         end = mid-1;
    //         else
    //         start = mid+1;
    //     }
    // }

    // Two Pointer 
    int start=0, end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==target){
            cout<<"Sum found: "<<arr[start]<<" "<<arr[end];
            break;
        }
        else if(arr[start]+arr[end]>target)
        end--;
        else
        start++;
    }

    return 0;
}