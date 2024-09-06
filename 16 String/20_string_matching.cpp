// K M P Algorithm

#include<iostream>
#include<vector>
using namespace std;

// BRUTE-FORCE METHOD 
int string_Matching(string haystack, string needle){
    int n = haystack.size(), m = needle.size();
    for(int i=0; i<=n-m; i++){
        int first=i, second=0;
        while(second<m){
            if(haystack[first] != needle[second])
            break;
            else
            first++, second++;
        }
        if(second == m)
        return first-second;
    }
    return -1;
}

// ********************** KMP **********************
void lpsFind(vector<int> &lps, string s){
    int prefix=0, suffix=1;

    while(suffix<s.size()){
        if(s[prefix] == s[suffix]){
            lps[suffix] = prefix+1;
            prefix++;
            suffix++;
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

int str_matching(string haystack, string needle){
    vector<int>lps(needle.size(), 0);
    lpsFind(lps, needle);

    int first=0, second=0;
    while(first<haystack.size() && second<needle.size()){
        if(haystack[first] == needle[second]){
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
    if(second == needle.size())
    return first-second;
    
    return -1;
}

int main(){
    string S1, S2;
    cout<<"Enter string S1: ";
    cin>>S1;
    cout<<"Enter string S2: ";
    cin>>S2;

    // cout<<"Index: "<<string_Matching(S1, S2);  // brute-force

    cout<<"Index: "<<str_matching(S1, S2);   // KMP

    return 0;
}