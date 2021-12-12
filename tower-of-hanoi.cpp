#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char A, char B, char C){
    
    if(n == 1) {
        cout<<"Move disc 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    
    TOH(n-1, A, C, B);
    cout<<"Move disc " << n <<" from "<<A<<" to "<<C<<endl;
    TOH(n-1, B, A, C);
}

int main() {
	int n;
	cin>>n;
	char A='A', B='B', C='C';
	TOH(n, A, B, C);
	return 0;
}

/* 
input:
3

output:
Move disc 1 from A to C
Move disc 2 from A to B
Move disc 1 from C to B
Move disc 3 from A to C
Move disc 1 from B to A
Move disc 2 from B to C
Move disc 1 from A to C



input: 
2

output:
Move disc 1 from A to B
Move disc 2 from A to C
Move disc 1 from B to C


input:
5

output:
Move disc 1 from A to C
Move disc 2 from A to B
Move disc 1 from C to B
Move disc 3 from A to C
Move disc 1 from B to A
Move disc 2 from B to C
Move disc 1 from A to C
Move disc 4 from A to B
Move disc 1 from C to B
Move disc 2 from C to A
Move disc 1 from B to A
Move disc 3 from C to B
Move disc 1 from A to C
Move disc 2 from A to B
Move disc 1 from C to B
Move disc 5 from A to C
Move disc 1 from B to A
Move disc 2 from B to C
Move disc 1 from A to C
Move disc 3 from B to A
Move disc 1 from C to B
Move disc 2 from C to A
Move disc 1 from B to A
Move disc 4 from B to C
Move disc 1 from A to C
Move disc 2 from A to B
Move disc 1 from C to B
Move disc 3 from A to C
Move disc 1 from B to A
Move disc 2 from B to C
Move disc 1 from A to C






*/
