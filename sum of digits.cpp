#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n == 0) return 0;
    
    return n%10 + fun(n/10);
    
}

int main() {
	int n;
	cin >> n;
	
	cout<<fun(n);;
	return 0;
}
