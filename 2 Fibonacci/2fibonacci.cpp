#include<iostream>
using namespace std;

int main(){
    int last = 0; 
    int prev = 1;
    int curr = last + prev;

    int n;
    cout<<"Enter position: ";
    cin>>n;

    if(n<=0) return 0;
    else if(n==1) return 1;
    else{
        for(int i=3; i<=n; i++){
        curr = last + prev;
        last = prev;
        prev = curr;
        }
    }

    cout<<"No. at position "<<n<<" is "<<curr;

}