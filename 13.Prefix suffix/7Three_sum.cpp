// Brute Force Method-------------------------------------------------------
// O(n^3)

#include<iostream>
#include<vector>
using namespace std;

int threeSum(vector<int>arr, int x){
    int n = arr.size();
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==x)
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter target value: ";
    cin>>x;

    cout<<threeSum(v, x);

}