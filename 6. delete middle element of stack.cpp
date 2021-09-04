#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int k){
    if(k == 1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s, k-1);
    s.push(temp);
    return;
}

stack<int> deletemiddle(stack<int> &s, int size){
    if(size == 0){
        return s;
    }
    int k = (size / 2) + 1;
    
    solve(s, k);
    
    return s;
}



int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    deletemiddle(s, 5);
    
    cout<<endl<<"Stack after delete middle"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    
   
}
