#include<iostream>
using namespace std;

void defanging(string address){
    int n = address.size();
    int index = 0;
    string ans;

    while(index<n){
        if(address[index] == '.')
        ans += "[.]";
        else
        ans += address[index];

        index++;
    }
    cout<<"Defanging of IP address: "<<ans;
}

int main(){
    string address;
    cout<<"Enter IP address: ";
    cin>>address;

    defanging(address);

    return 0;
}