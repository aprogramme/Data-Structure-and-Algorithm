// 1. Every student get atleast 1 book 
// 2. Books will be allocated in contiguous way.
// 3. Out of all permutation, student with most no. of books get minimum pages

#include<iostream>
using namespace std;

int main(){
    int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter no. of student: ";
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
        int page=0, student=1;
        for(int i=0; i<n; i++){
            page += arr[i];
            if(page>mid){
                student++;
                page = arr[i];
            }
        }

        if(student <= k){
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