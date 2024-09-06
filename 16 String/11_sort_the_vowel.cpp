#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<"String: "<<s<<endl;

    vector<int>lower(26, 0);
    vector<int>upper(26, 0);

    for(int i=0; i<s.size(); i++){
        // lower
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
        }
        // Upper
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }
    cout<<"Hash string: "<<s<<endl;

    string ans; 
    // Upper
    for(int i=0; i<26; i++){
        char vowel= 'A'+i;
        while(upper[i]){
            ans += vowel;
            upper[i]--;
        }
    }
    // lower
    for(int i=0; i<26; i++){
        char vowel= 'a'+i;
        while(lower[i]){
            ans += vowel;
            lower[i]--;
        }
    }
    cout<<"Sort vowel: "<<ans<<endl;

    int first=0, second=0;    // first indicate the s string and second indicate the ans string
    while(second<ans.size()){
        if(s[first] == '#'){
            s[first] = ans[second];
            second++;
        }
        first++;
    }

    cout<<"Answer: "<<s;
}