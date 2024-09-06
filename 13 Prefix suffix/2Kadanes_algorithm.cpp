#include<iostream>
#include<vector>
using namespace std;

int largestSum(vector<int>arr){
    int n = arr.size(), prefix=0, maxi=INT32_MIN;
    for(int i=0; i<n; i++){
        prefix += arr[i];
        maxi = max(maxi, prefix);
        if(prefix<0)
        prefix=0;
    }

    return maxi;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements: ";
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    cout<<largestSum(v);
}