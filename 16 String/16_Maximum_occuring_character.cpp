#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;

    vector<int>frequency(26,0);

    for(int i=0; i<s.size(); i++)
     frequency[s[i]-'a']++;

     int maxFreq=INT32_MIN, maxIndex=0;
     for(int i=0; i<26; i++){
         if(frequency[i]>maxFreq){
            maxFreq=frequency[i];
            maxIndex = i;
         }
     }
     char chr= 'a' + maxIndex;

    cout<<"Highest frequency: "<<chr;
}