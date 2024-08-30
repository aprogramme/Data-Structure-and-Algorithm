#include<iostream>
using namespace std;

int main(){
    int target;
    cout<<"Enter number: ";
    cin>>target;

    int start = 1;
    int end = target;
    int mid;
    int ans = 0;
    while(start<=end){
        mid = start + (end-start)/2;
        if(mid*mid == target){
            ans = mid;
            return ans;
        }
        else if(mid*mid < target){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return ans;
}