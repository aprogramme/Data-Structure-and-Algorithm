#include<iostream>
#include<vector>
using namespace std;

vector<int> Factorial(int N){
    vector<int>ans(1, 1);
    while(N>1){
        int carry=0, result, size=ans.size();
        for(int i=0; i<size; i++){
            result = ans[i]*N + carry;
            carry = result/10;
            ans[i] = result % 10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry /= 10;
        }
        N--;
    }
    int start=0, end=ans.size()-1;
    while(start<end){
        swap(ans[start], ans[end]);
        start++;
        end--;
    }

    return ans;
}

int main(){
    int N;
    cout<<"Enter number: ";
    cin>>N;

    vector<int> result =  Factorial(N);
    cout<<"Factorial: ";
    for(int i=0; i<result.size(); i++){
        cout<<result[i];
    }
    return 0;
}