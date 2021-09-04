#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int n, char s, char h, char d){
    if(n == 1){
        cout<<"Plate 1 is moved from "<<s<<" to "<<d<<endl;
        return;
    }
    
    solve(n-1, s , d, h );  // putting destination = helper and taking helper = destination
    cout<< "Plate "<<n<< " is moved from "<<s<<" to "<<d<<endl;
    solve(n-1, h, s, d); // putting source = helper and taking helper = source
}


int main()
{
    char s = 'S', h = 'H', d = 'D';  // s = source, h = helper, d = destination
    int n; cin>>n;
    
    solve(n, s, h, d);
    return 0;
}
