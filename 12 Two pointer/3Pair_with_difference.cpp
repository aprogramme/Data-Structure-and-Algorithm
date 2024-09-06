#include<iostream>
using namespace std;

int main(){
    int arr[] = {5, 10, 3, 2, 50, 80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 30;

    // sort the array 
    for(int i=0; i<n-1; i++){
        int index = i;
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j])
            index = j;
        }
        swap(arr[i], arr[index]);
    }

    // Brute Force Method - O(n^2)
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[j]-arr[i] == target){
    //             cout<<arr[i]<<" "<<arr[j];
    //         }
    //     }
    // }

    // Binary Search - O(nlogn)
    // for(int i=0; i<n-1; i++){
    //     int x = target+arr[i];
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

    // Two pointer 
    int start=0, end=1;
    while(end<n){
        if(arr[end]-arr[start]==target){
            cout<<arr[start]<<" "<<arr[end];
            break;
        }
        else if(arr[end]-arr[start]<target)
        end++;
        else
        start++;
    }
    
}