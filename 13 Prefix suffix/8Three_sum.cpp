// Binary Search  O(n^2logn)---------------------------------------

#include<iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n] = {1, 4, 45, 6, 10, 8};
    int target = 13;

    // sort the array 
    for(int i=0; i<n-1; i++){
        int index=i;
        for(int j=1; j<n; j++){
            if(arr[j]<arr[index])
            index = j;
        }
        swap(arr[i], arr[index]);
    }

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            int x = target-arr[i]-arr[j];
            int start=j+1, end=n, mid;
            while(start<end){
                mid = start + (end-start)/2;
                if(arr[mid]==x){
                    cout<<"Pair found";
                    break;
                }
                else if(arr[mid]>x)
                end = mid-1;
                else
                start=mid+1;
            }
        }
    }
}