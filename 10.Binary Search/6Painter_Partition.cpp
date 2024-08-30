#include<iostream>
using namespace std;

int main(){
    int arr[] = {5, 10, 30, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter no. of painter: ";
    cin>>k;

    int start=0, end=0, mid, ans;
    for(int i=0; i<n; i++){
        if(arr[i]>start){
            start = arr[i];
        }
        end += arr[i];
    }

    while(start<=end){
        mid = start + (end-start)/2;
        int paint=0, painter=1;
        for(int i=0; i<n; i++){
            paint += arr[i];
            if(paint>mid){
                painter++;
                paint = arr[i];
            }
        }

        if(painter <= k){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    cout<<ans;

    return 0;
}