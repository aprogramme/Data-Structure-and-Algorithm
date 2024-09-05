#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 4, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k;
    cout<<"Enter no. of cow: ";
    cin>>k;

    int start=1, end, mid, ans;

    for(int i=0; i<n; i++){
        int index=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    end = arr[n-1] - arr[0];

    while(start<=end){
        mid = start + (end-start)/2;
        int cow=1, position = arr[0];
        for(int i=1; i<n; i++){
            if(position+mid <= arr[i]){
                cow++;
                position = arr[i];
            }
        }

        if(cow<k){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
    }

    cout<<ans;

    return 0;
}