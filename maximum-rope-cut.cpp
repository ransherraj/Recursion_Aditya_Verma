

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int n, int a, int b, int c){
    if(n == 0) return 0;
    if(n < 0) return -1;
    int m = max( max(fun(n-a, a, b, c), fun(n-b, a, b, c)), fun(n-c, a, b, c));
    if(m==-1) return -1;
    return 1 + m;
}

int main() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	cout<<fun(n, a, b, c);
	return 0;
}

/*

TS 1:
input:
23
6 2 7 

output:
9


TS2:
input:
23
13 14 6 

output:
-1

*/
