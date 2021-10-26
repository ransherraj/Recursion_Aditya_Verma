#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op, int &count){
    
    if(ip.length() == 0){
        cout<<op<<" ";
        count++;
        return;
    }
    
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    
    solve(ip, op1, count);
    solve(ip, op2, count);
    return ;
}


int main()
{
    string op = "";
    string ip;
    cin>>ip;
    int count = 0;
    solve(ip, op, count);
    cout<<endl<<"total permutations: "<<count;
    
}


// Code 2

    #include <iostream>
    using namespace std;
    void solve(string ip, string op){
    	if(ip.length() == 0) {
    		cout<<op<<" ";
    		return;
    	}
    	string op1 = op, op2 = op;
    	op2.push_back(ip[0]);
    	ip.erase(ip.begin());
    	solve(ip, op1);
    	solve(ip, op2);
    	return;
    }
    int main() {
    	string ip;
    	cin>>ip;
    	string op = "";
    	solve(ip, op);
    	return 0;
    }
