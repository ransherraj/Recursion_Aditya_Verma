// code 1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int print( int n){
    if(n==0){
        return -1;
    }
    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}


// code 2

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void print( int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
