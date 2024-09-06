#include<iostream>
#include<vector>
using namespace std;

int main(){
    string S;
    cout<<"Enter a string: ";
    cin>>S;
    int original_size = S.size();
    string str = S;
    string rev = S;
    int start=0, end=rev.size()-1;
    while(start<end){
        swap(rev[start], rev[end]);
        start++;
        end--;
    }

    S += '$';
    S += rev;
    int total_size = S.size();

    vector<int>lps(total_size, 0);
    int prefix=0, suffix=1;
    while(suffix<total_size){
        if(S[prefix]==S[suffix]){
            lps[suffix] = prefix+1;
            prefix++;
            suffix++;
        }
        else{
            if(prefix==0){
                lps[suffix]=0;
                suffix++;
            }
            else
            prefix = lps[prefix-1];
        }
    }

    cout<<original_size - lps[S.size()-1];

    return 0;
}