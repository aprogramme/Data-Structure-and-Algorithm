#include<iostream>
using namespace std;

int main(){
    int n=8;
    int arr[n] = {4, 2, 0, 5, 2, 6, 2, 3};

    int start=0, end=n-1, water=0, leftmax=0, rightmax=0;
int mini=0;
    while(start<end){
        if(leftmax>arr[start]){
            water += (leftmax-arr[start]);
            start++;
        }
        else{
            leftmax = arr[start];
            start++;
        }

        if(rightmax>arr[end]){
            water += (rightmax-arr[end]);
            end--;
        }
        else{
            rightmax = arr[end];
            end--;
        }
    }

    cout<<water;
    
}