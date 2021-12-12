#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int n,vector<int>a,int sum ){
    if(n == 0){
        return sum == 0 ? 1 : 0;
    }
    return fun(n-1, a, sum) + fun(n-1, a, sum-a[n-1]);
    
}

int main() {
	int n, sum;
	cin >> n >> sum;
	vector<int> a(n);
	for(int i = 0; i<n; i++){
	    cin>>a[i];
	}
	cout<<fun(n, a, sum);
	return 0;
}
