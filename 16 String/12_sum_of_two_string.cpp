#include<iostream>
using namespace std;

string add(string s1, string s2){
    int index1=s1.size()-1, index2=s2.size()-1;
    string ans;
    int carry=0, sum;

    while(index2>=0){
        sum = (s1[index1]-'0') + (s2[index2]-'0') + carry;
        carry = sum/10;
        char c = '0' + sum%10;
        ans += c;
        index1--, index2--;
    }

    // if index1 still exits
    while(index1>=0){
        sum = (s1[index1]-'0') + carry;
        carry = sum/10;
        char c = '0' + sum%10;
        ans += c;
        index1--;
    }

    if(carry)
    ans += '1';

    int start=0, end=ans.size()-1;
    while(start<end){
        swap(ans[start], ans[end]);
        start++;
        end--;
    }

    return ans;
}

int main(){
    string num1, num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;

    if(num1.size()<num2.size())
    cout<<"Sum of two string: "<<add(num2, num1);
    else
    cout<<"Sum of two string: "<<add(num1, num2);

    return 0;
}