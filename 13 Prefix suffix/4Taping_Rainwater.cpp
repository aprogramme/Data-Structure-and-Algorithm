// Creating Extra Array ----------------------------------------

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 8;
    int arr[n] = {4, 2, 0, 5, 2, 6, 2, 3};

    vector<int>leftmax(n);
    leftmax[0] = 0;
    for(int i=1; i<n; i++){
        leftmax[i] = max(arr[i-1], leftmax[i-1]);
    }
    for(int i=0; i<n; i++){
        cout<<leftmax[i]<<" ";
    }
    cout<<endl;

    vector<int>rightmax(n);
    rightmax[n-1]=0;
    for(int i=n-2; i>=0; i--){
        rightmax[i] = max(arr[i+1], rightmax[i+1]);
    }

    for(int i=0; i<n; i++){
        cout<<rightmax[i]<<" ";
    }
    cout<<endl;

    vector<int>minimum(n);
    int add=0;
    for(int i=0; i<n; i++){
        minimum[i] = min(leftmax[i], rightmax[i]);
        int diff = minimum[i]-arr[i];
        if(diff<0)
        diff = 0;
        add += diff;
    }

    cout<<add;
}