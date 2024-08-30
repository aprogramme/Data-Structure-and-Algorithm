#include<iostream>
#include<vector>
using namespace std;

int main(){
    // create vector
    vector<int>v;
    // size and capacity
    cout<<"Size of v: "<<v.size()<<endl; // 0
    cout<<"Capacity of v: "<<v.capacity()<<endl; // 0
    
    v.push_back(2);
    cout<<"Size of v: "<<v.size()<<endl; // 1
    cout<<"Capacity of v: "<<v.capacity()<<endl; // 1

    v.push_back(4);
    cout<<"Size of v: "<<v.size()<<endl; // 2
    cout<<"Capacity of v: "<<v.capacity()<<endl; // 2

    v.push_back(8);
    cout<<"Size of v: "<<v.size()<<endl; // 3
    cout<<"Capacity of v: "<<v.capacity()<<endl; // 4
    // update value 
    v[1] = 6;


    vector<int>v1(5, 1);
    cout<<"Size of v1: "<<v1.size()<<endl; // 5
    cout<<"Capacity of v1: "<<v1.capacity()<<endl; // 5
    v1.push_back(4);
    cout<<"Size of v1: "<<v1.size()<<endl; // 6
    cout<<"Capacity of v1: "<<v1.capacity()<<endl; // 10


    vector<int>v2 = {1, 2, 3, 4, 5}; 
    cout<<"Size of v2: "<<v2.size()<<endl;


    // Delete value from vector 
    vector<int>v3;
    v3.push_back(4);
    v3.push_back(3);
    v3.push_back(6);
    v3.push_back(1);
    v3.push_back(9);
    cout<<"Size of v3: "<<v3.size()<<endl;  // 5
    v3.pop_back();
    cout<<"Size of v3: "<<v3.size()<<endl;  // 4

    v3.erase(v3.begin()+1);
    cout<<"Size of v3: "<<v3.size()<<endl;  // 3

    // print v3 
    for(int i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";      // 4 6 1
    }
    cout<<endl;

    // insert value at particular position
    v3.insert(v3.begin()+1, 50);
    for(int i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";     // 4 50 5 1
    }
    cout<<endl;

    v3[1] = 69;
    for(int i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";     // 4 50 5 1
    }

    // clear all element 
    v3.clear();
    cout<<"Size of v3: "<<v3.size()<<endl;  // 0
    cout<<"Capacity of v3: "<<v3.capacity()<<endl;  // 8


    vector <int>arr;
    arr.push_back(2);
    arr.push_back(22);
    arr.push_back(21);
    arr.push_back(25);
    arr.push_back(28);
    // cout<<arr[0]<<endl;
    cout<<arr.front()<<endl; // 2
    cout<<arr.back()<<endl;  // 28


    // Copy value of one vector in other vector 
    vector<int>a;
    a = arr;
    cout<<"Size of a: "<<a.size()<<endl;
    for(auto i=arr.begin(); i != arr.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto j: a)
    cout<<j<<" ";


    // Sorting  
    vector<int>ans;
    ans.push_back(5);
    ans.push_back(1);
    ans.push_back(7);
    ans.push_back(2);
    ans.push_back(9);

    // sort(ans.begin(), ans.end());  // increasing order

    // sort(ans.begin(), ans.end(), greater<int>());  // decreasing order

    // search in binary search 
    vector<int>i;
    i.push_back(5);
    i.push_back(15);
    i.push_back(25);
    i.push_back(35);
    i.push_back(45);
    cout<<binary_search(i.begin(), i.end(), 35);

    // cout<<find(i.begin(), i.end(), 35)-i.begin()<<endl; 
    
    return 0;
}