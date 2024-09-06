#include<iostream>
#include<vector>
using namespace std;

// *********** K M P ***********
void lpsFind(vector<int> &lps, string S){
    int prefix=0, suffix=1;
    while(suffix<S.size()){
        if(S[prefix] == S[suffix]){
            prefix++, suffix++;
        }
        else{
            if(prefix == 0){
                lps[suffix]=0;
                suffix++;
            }
            else
            prefix = lps[prefix-1];
        }
    }
}

int circular_string_matching(string s1, string s2){
    vector<int>lps(s2.size(), 0);
    lpsFind(lps, s2);

    int first=0, second=0;
    while(first<s1.size(), second<s2.size()){
        if(s1[first] == s2[second]){
            first++, second++;
        }
        else{
            if(second==0)
            first++;
            else
            second = lps[second-1];
        }
    }
    if(second == s2.size())
    return 1;

    return 0;
}

int main(){
    string S1, S2;
    cout<<"Enter string S1: ";
    cin>>S1;
    cout<<"Enter string S2: ";
    cin>>S2;

    S1 += S1;

    cout<<"Output: "<<circular_string_matching(S1, S2);
}