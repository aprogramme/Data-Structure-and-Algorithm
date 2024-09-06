#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;

    cout<<"String: "<<str<<endl;
    

    // clockwise direction 
    string clockwise = str;
    char a = clockwise[clockwise.size()-1];
    char b = clockwise[clockwise.size()-2];
    int index = clockwise.size()-3;
    while(index >= 0){
        clockwise[index+2] = clockwise[index];
        index--;
    }
    clockwise[0]=b;
    clockwise[1]=a;
    cout<<"Clockwise: "<<clockwise<<endl;


    // anti-clockwise direction 
    string anticlockwise = str;
    char c = anticlockwise[0];
    char d = anticlockwise[1];
    int index1 = 2;
    while(index1 < anticlockwise.size()){
        anticlockwise[index1-2] = anticlockwise[index1];
        index1++;
    }
    anticlockwise[anticlockwise.size()-2] = c;
    anticlockwise[anticlockwise.size()-1] = d;
    cout<<"Anticlockwise: "<<anticlockwise;

    return 0;
}