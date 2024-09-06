#include<iostream>
using namespace std;

int Num(char roman){
    if(roman == 'I')
    return 1;
    else if(roman == 'V')
    return 5;
    else if(roman == 'X')
    return 10;
    else if(roman == 'L')
    return 50;
    else if(roman == 'C')
    return 100;
    else if(roman == 'D')
    return 500;
    else
    return 1000;
}

int main(){
    string s;
    cout<<"Enter Roman number: ";
    cin>>s;

    int sum=0, index=0;
    while(index < s.size()-1){
        if(Num(s[index]) < Num(s[index+1]))
        sum -= Num(s[index]);
        else
        sum += Num(s[index]);
        index++;
    }
    sum += Num(s[index]);

    cout<<"Number: "<<sum;

    return 0;
}