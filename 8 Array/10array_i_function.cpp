#include<iostream>
using namespace std;

void Fun(int a[], int n){
    cout<<sizeof(a)<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout<<sizeof(arr)<<endl;
    Fun(arr, 5);
}