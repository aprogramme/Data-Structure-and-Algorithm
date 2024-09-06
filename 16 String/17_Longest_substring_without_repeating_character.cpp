#include<iostream>
#include<vector>
using namespace std;

int main(){
    string S;
    cout<<"Enter string: ";
    cin>>S;

    vector<int>count(256, 0);
    int first=0, second=0, len=0;
    while(second<S.size()){
        while(count[S[second]]){
            count[S[first]]=0;
            first++;
        }
        count[S[second]] = 1;
        len = max(len, second-first+1);
        second++;
    }

    string ans;
    for(int i=first; i<second; i++){
        ans += S[i];
    }

    cout<<"Longest substring without repeating character "<<ans<<" of length "<<len;

    return 0;
}