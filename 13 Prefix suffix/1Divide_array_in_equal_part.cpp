#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Equal_Sum(vector<int>arr){
    int n=arr.size(), prefix=0, total_sum=0;

    for(int i=0; i<n; i++)
    total_sum += arr[i];

    for(int i=0; i<n-1; i++){
        prefix += arr[i];
        if(total_sum == 2*prefix)
        return 1;
    }
    return 0;
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

    cout<<Equal_Sum(v);
}