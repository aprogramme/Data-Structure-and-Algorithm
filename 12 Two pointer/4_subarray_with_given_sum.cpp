#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 7, 5};
    int target = 12;

    int start=0, end=1, sum=0;

    sum = arr[start]+arr[end];
    while(end<5){
        if(sum==target){
           cout<<start+1<<" "<<end+1;
           return 0;
        }
        else if(sum<target){
            end++;
            sum += arr[end];
        }
        else{
            sum -= arr[start];
            start++;
        }
    }
}