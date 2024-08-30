// Find Minimum Element in an array 

#include<iostream>
using namespace std;

int main(){
    int a[5];
    cout<<"Enter element of array: ";
    for(int i=0; i<5; i++){
        cin>>a[i];
    }

    int ans = INT32_MAX;
    for(int i=0; i<5; i++){
        if(a[i]<ans){
            ans = a[i];
        }
    }

    cout<<"Minimum Element: "<<ans;

    return 0;

}