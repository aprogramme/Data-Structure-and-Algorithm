#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr1[1000];
    int arr2[1000];

    cout<<"Enter element of arr1: ";
    for(int i=0; i<size; i++){
        cin>>arr1[i];
    }

    cout<<endl;

    cout<<"Enter element of arr2: ";
    for(int i=0; i<size; i++){
        cin>>arr2[i];
    }

    // total sum of element of arr1 
    int sum1=0;
    for(int i=0; i<size; i++){
        sum1 = sum1 + arr1[i];
    }

    // total sum of element of arr2
    int sum2=0;
    for(int i=0; i<size; i++){
        sum2 = sum2 + arr2[i];
    }

    if(sum1 == sum2){
        cout<<"Array are equal";
    }
    else{
        cout<<"Not equal";
    }

    return 0;
}