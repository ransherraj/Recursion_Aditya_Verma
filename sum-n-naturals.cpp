// code 1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(int n, int &res){
    if(n == 0) return;
    
    fun(n-1, res);
    res+=n;
}

int main() {
	int n, res=0;
	cin >> n;
	fun(n, res);
	cout<<res;
	return 0;
}



// code 2 


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n == 0) return 0;
    
    return n + fun(n-1);
    
}

int main() {
	int n;
	cin >> n;
	
	cout<<fun(n);;
	return 0;
}
