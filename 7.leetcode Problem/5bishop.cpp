#include<iostream>
using namespace std;

int bishopMove(int a, int b){
    int count = 0;
    count = count + min(8-a, 8-b);
    count = count + min(8-a, b-1);
    count = count + min(a-1, 8-b);
    count = count + min(a-1, b-1);

    return count;
}

int main(){
    int a, b;
    cout<<"Enter position of bishop: ";
    cin>>a>>b;

    cout<<"Total move: "<<bishopMove(a, b);

    return 0;
}