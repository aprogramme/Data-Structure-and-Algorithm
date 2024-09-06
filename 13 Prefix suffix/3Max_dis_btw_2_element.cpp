#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 8;
    int arr[n] = {9, 5, 8, 12, 2, 3, 7, 4};

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // vector<int>v(n);

    // int ans=INT32_MIN;
    // for(int i=n-1; i>=0; i--){
    //     ans = max(ans, arr[i]);
    //     v[i] = ans;
    // }

    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // int maximum=INT32_MIN;
    // for(int i=0; i<n; i++){
    //     maximum = max(maximum, v[i+1]-arr[i]);
    // }
    // cout<<maximum;


    // without using extra array   -------- O(n)
    int suffix=arr[n-1],ans=INT32_MIN;
    for(int i=n-2; i>=0; i--){
        ans = max(ans, suffix-arr[i]);
        suffix = max(suffix, arr[i]);
    }
    cout<<ans;

}