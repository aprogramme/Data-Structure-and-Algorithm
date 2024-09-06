// S1 = abcd
// S2 = cdabcdab

// To make S2 substring repeat S1;
// abcdabcdabcd
// now S2 is substring of S1 and S1 repeat 3 times

#include<iostream>
#include<vector>
using namespace std;

void lpsFind(vector<int> &lps, string s){
    int prefix=0, suffix=1;
    while(suffix<s.size()){
        if(s[prefix] == s[suffix]){
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


int String_Matching(string a, string b){
    vector<int>lps(b.size(), 0);
    lpsFind(lps, b);

    int first=0, second=0;
    while(first<a.size() && second<b.size()){
        if(a[first] == b[second]){
            first++;
            second++;
        }
        else{
            if(second == 0)
            first++;
            else
            second = lps[second-1];
        }
    }

    if(second == b.size())
    return 1;

    return -1;
}

int repeat_String(string s1, string s2){
    if(s1 == s2)
    return 1;

    int repeat = 1;
    string temp = s1;
    while(temp.size()<s2.size()){
        temp += s1;
        repeat++;
    }

    if(String_Matching(temp, s2) == 1){
        // cout<<"S1 repeat: "<<repeat;
         return repeat;
    }

    if(String_Matching(temp+s1, s2) == 1){
        // cout<<"S1 repeat: "<<repeat+1;
        return repeat+1;
    }

    return -1;
}

int main(){
    string S1, S2;
    cout<<"Enter string S1: ";
    cin>>S1;
    cout<<"Enter string S2: ";
    cin>>S2;

    cout<<repeat_String(S1, S2);

    return 0;
}