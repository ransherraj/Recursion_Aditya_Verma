#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void insertstack(stack<int> &s, int temp);
stack<int> sortstack(stack<int> &s);

void insertstack(stack<int> &s, int temp){
    if(s.size() == 0 || s.top()<=temp){
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insertstack(s, temp);
    s.push(val);
    return;
}

stack<int> sortstack(stack<int> &s){
    if(s.size() == 1){
        return s;
    }
    int temp = s.top();
    s.pop();
    sortstack(s);
    
    insertstack(s, temp);
    
    return s;
}



int main()
{
    stack<int> s;
    s.push(5);
    s.push(3);
    s.push(6);
    s.push(1);
    s.push(8);
    
    sortstack(s);
    
    cout<<endl<<"Array after sorting:"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
        
    }
}
