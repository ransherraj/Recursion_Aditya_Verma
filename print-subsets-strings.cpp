

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(string s, string o, int i = 0){
    
    if(s.length() == i) {
        cout<<o<<" ";
        return;
    }
    
    fun(s, o, i+1);
    fun(s, o+s[i], i+1);
}

int main() {
	string s;
	cin>>s;
	string o = "";
	fun(s, o);
	return 0;
}

/*

input: abc

output:
 c b bc a ac ab abc 



*/
