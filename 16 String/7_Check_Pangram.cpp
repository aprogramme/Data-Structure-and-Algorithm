// Pangram : A sentence which contain all alphabet i.e., (a, b, c, d,...,x, y, z)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    string sentence = "thequickbrownfoxjumpsoverthelazydog";

    vector<bool>alpha(26, 0);

    for(int i=0; i<sentence.size(); i++){
        int index = sentence[i]-'a';
        alpha[index] = 1;
    }

    for(int i=0; i<26; i++){
        if(alpha[i] == 0){
            cout<<"Not a Pangram";
            return 0;
        }
    }
    cout<<"It is a Pangram";
}