// Two Pointer  O(n^2)------------------------------------

#include<iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {4, 1, 45, 6, 8, 10};
    int target = 13;

    for(int i=0; i<n-2; i++){
        int x = target - arr[i];
        int start=i+1, end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==x){
                cout<<"Yes";
                break;
            }
            else if(arr[start]+arr[end]>x)
            end--;
            else
            start++;
        }
    }
}