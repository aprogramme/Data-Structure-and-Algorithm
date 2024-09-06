#include<iostream>
#include<vector>
using namespace std;

int main(){
    string S;
    cout<<"Enter string: ";
    cin>>S;

    vector<int>count(256, 0);
    int first=0, second=0, len=S.size(), diff=0;

    // calculate all the unique character 
    while(first<S.size()){
        if(count[S[first]]==0)
        diff++;

        count[S[first]]++;
        first++;
    };

    for(int i=0; i<256; i++)
    count[i]++;

    first=0;

    while(second<S.size()){
        // while diff exist
        while(diff  && second<S.size()){
            if(count[S[second]]==0)
            diff--;

            count[S[second]]++;
            second++;
        }

        len = min(len, second-first);

        // till diff become 1
        while(diff != 1){
            len = min(len, second-first);
            count[S[first]]--;

            if(count[S[first]]==0)
            diff++;

            first++;
        }
    }
    cout<<len;
}