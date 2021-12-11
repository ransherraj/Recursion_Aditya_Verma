#include <bits/stdc++.h>
using namespace std;
void insertion(stack<int>&st,int temp)
{
   if(st.empty() || st.top()<=temp)
   {
   st.push(temp);
   return;
   }
   int x=st.top();
   st.pop();
   insertion(st,temp);
   st.push(x);
}
void sorting(stack<int>&st)
{
   if(st.size()<=1)
   return;
   int temp=st.top();
   st.pop();
   sorting(st);
   insertion(st,temp);
}
int main()
{
    int n; 
    cin>>n;
    stack<int>st;
    for(int i = 0; i< n ; i++){
        int x;
        st.push(x);
    }
   
    sorting(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
   }
    return 0;
}
