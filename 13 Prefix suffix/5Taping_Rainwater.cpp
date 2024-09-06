// Without using extra Array---------------------------

#include<iostream>
using namespace std;

int main(){
    int n=8;
    int arr[n] = {4, 2, 0, 5, 2, 6, 2, 3};

    int leftmax=0, rightmax=0, water=0, maxheight=arr[0];
    
    // finding largest index 
    for(int i=1; i<n; i++){
        if(arr[i]>maxheight)
        maxheight=i;
    }

    // traversing left side 
    for(int i=0; i<maxheight; i++){
        if(leftmax>arr[i])
        water += leftmax-arr[i];
        else
        leftmax=arr[i];
    }

    // traversing right side 
    for(int i=n-1; i>maxheight; i--){
        if(rightmax>arr[i])
        water += rightmax-arr[i];
        else
        rightmax=arr[i];
    }

    cout<<water;
}