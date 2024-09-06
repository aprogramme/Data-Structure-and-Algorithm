#include<iostream>
using namespace std;

int main(){
    char arr[] = {'A', 'P', 'P', 'L', 'E'};
    // cout<<arr;
    // for(int i=0; i<5; i++)
    // cout<<arr[i];

    char nums[10];
    // cout<<"Input: ";
    // cin>>nums;
    // nums[3] = '\0';
    // cout<<"Output: "<<nums;

    // ********************* String *********************
    string s = "Aayush";
    // cout<<s;

    string name;
    // cout<<"Input: ";
    // // cin>>name;
    // getline(cin, name);                // print whole sentence
    // cout<<"Output: "<<name<<endl;
    // cout<<"Size: "<<name.size();        // return size of string

    string s1 = "aayush ";
    string s2 = "raj";
    // string s3 = s1 + s2;           // add strings
    string s3 = s1.append(s2);          // add strings
    // cout<<s3;

    string name1 = "Aayush";
    // name1.push_back('7');          // add at last index
    // name1 = name1 + "7";
    name1.pop_back();           // remove last element
    // cout<<name1;

    // string sentence = "What we "think", we become!";
    string sentence = "What we \"think\", we become!";   //   "\"=> back slash
    // cout<<sentence;

    // string n = "\0";      // print empty space
    string n = "\\0";      // print null char
    cout<<n;

}