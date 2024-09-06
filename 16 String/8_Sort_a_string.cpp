#include<iostream>
#include<vector>
using namespace std;

int main(){
    string S;
    cout<<"Enter a string: ";
    cin>>S;

    cout<<"Input: "<<S<<endl;

    vector<int>count(26, 0);

    for(int i=0; i<S.size(); i++)
    count[S[i]-'a']++;

    string ans;
    for(int i=0; i<26; i++){
        char alpha = 'a'+i;
        while(count[i]){
            ans += alpha;
            count[i]--;
        }
    }

    cout<<"Output: "<<ans;

    return 0;
}