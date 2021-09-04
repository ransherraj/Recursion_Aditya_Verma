#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void insertarr(vector<int> &s, int temp);
vector<int> sortarr(vector<int> &s, int size);

void insertarr(vector<int> &s, int temp){
    if(s.size() == 0 || s[s.size()-1]<=temp){
        s.push_back(temp);
        return;
    }
    int val = s[s.size()-1];
    s.pop_back();
    insertarr(s, temp);
    s.push_back(val);
    return;
}

vector<int> sortarr(vector<int> &s){
    if(s.size() == 1){
        return s;
    }
    int temp = s[s.size()-1];
    s.pop_back();
    sortarr(s);
    
    insertarr(s, temp);
    
    return s;
}



int main()
{
    vector<int> s;
    s.push_back(5);
    s.push_back(3);
    s.push_back(6);
    s.push_back(1);
    s.push_back(8);
    
    sortarr(s);
    
    cout<<endl<<"Array after sorting:"<<endl;
    for( auto i : s){
        cout<<i<<" ";
        
    }
}
