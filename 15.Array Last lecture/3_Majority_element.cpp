#include<iostream>
using namespace std;

int main(){
    int arr[11] = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};

    int candidate, count=0;
    for(int i=0; i<11; i++){
        if(count==0){
            count = 1;
            candidate = arr[i];
        }
        else{
            if(candidate == arr[i])
            count++;
            else
            count--;
        }
    }

    count=0;
    for(int i=0; i<8; i++){
        if(arr[i] == candidate)
        count++;
    }
    if(count> 8/2)
    cout<<candidate;
    else
    cout<<-1;
}