#include<iostream>
using namespace std;

void Rectangle(int a, int b, int c, int d){
    if((a==b && c==d)  || (a==c && b==d) || (a==d && b==d)){
        cout<<"It is rectangle";
    }
    else{
        cout<<"Not rectangle";
    }
}

int main(){
    int a, b, c, d;
    cout<<"Enter sides of the rectangle: ";
    cin>>a>>b>>c>>d;

    Rectangle(a, b, c, d);

    return 0;
}